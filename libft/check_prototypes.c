#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>  // Necesario para access() y F_OK

int verify_function_declaration(const char *filename, const char *expected_prototype) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        // Si el archivo no se puede abrir, retornamos 0 para indicar que no se encontró
        return 0;
    }

    char line[1024];
    
    // Recorremos las líneas del archivo
    while (fgets(line, sizeof(line), file)) {
        // Eliminar comentarios de línea
        char *comment_start = strchr(line, '/');
        if (comment_start) {
            *comment_start = '\0'; // Eliminar el comentario
        }

        // Verificamos si la línea contiene el prototipo esperado, incluyendo el asterisco
        if (strstr(line, expected_prototype)) {
            fclose(file);
            return 1; // Prototipo encontrado
        }
    }

    fclose(file);
    return 0; // No se encontró el prototipo
}

int main() {
    // Prototipos esperados de las funciones
    const char *prototypes[] = {
        "ft_atoi(const char *str)",
        "ft_bzero(void *s, size_t n)",
        "*ft_calloc(size_t count, size_t size)",
        "ft_isalnum(int c)",
        "ft_isalpha(int c)",
        "ft_isascii(int c)",
        "ft_isdigit(int c)",
        "ft_isprint(int c)",
        "ft_itoa(int n)",
        "ft_lstadd_back(t_list **lst, t_list *new)",
        "ft_lstadd_front(t_list **lst, t_list *new)",
        "ft_lstclear(t_list **lst, void (*del)(void *))",
        "ft_lstdelone(t_list *lst, void (*del)(void *))",
        "ft_lstiter(t_list *lst, void (*f)(void *))",
        "ft_lstlast(t_list *lst)",
        "*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))",
        "ft_lstnew(void *content)",
        "ft_lstsize(t_list *lst)",
        "*ft_memchr(const void *s, int c, size_t n)",
        "ft_memcmp(const void *s1, const void *s2, size_t n)",
        "*ft_memcpy(void *dst, const void *src, size_t n)",
        "*ft_memmove(void *dest, const void *src, size_t len)",
        "*ft_memset(void *b, int c, size_t len)",
        "ft_putchar_fd(char c, int fd)",
        "ft_putendl_fd(char *s, int fd)",
        "ft_putstr_fd(char *s, int fd)",
        "ft_split(char const *s, char c)",
        "ft_strchr(const char *s, int c)",
        "ft_strdup(const char *s1)",
        "ft_striteri(char *s, void (*f)(unsigned int, char*))",
        "ft_strjoin(char const *s1, char const *s2)",
        "ft_strlcat(char *dest, const char *src, size_t size)",
        "ft_strlcpy(char *dest, const char *src, size_t size)",
        "ft_strlen(const char *s)",
        "ft_strmapi(char const *s, char (*f)(unsigned int, char))",
        "ft_strncmp(const char *s1, const char *s2, size_t n)",
        "ft_strnstr(const char *haystack, const char *needle, size_t len)",
        "ft_strrchr(const char *s, int c)",
        "ft_strtrim(char const *s1, char const *set)",
        "ft_substr(char const *s, unsigned int start, size_t len)",
        "ft_tolower(int c)",
        "ft_toupper(int c)"
    };

    const char *files[] = {
        "ft_atoi.c",
        "ft_bzero.c",
        "ft_calloc.c", // Verifica que este archivo exista en tu proyecto
        "ft_isalnum.c",
        "ft_isalpha.c",
        "ft_isascii.c",
        "ft_isdigit.c",
        "ft_isprint.c",
        "ft_itoa.c",
        "ft_lstadd_back_bonus.c",
        "ft_lstadd_front_bonus.c",
        "ft_lstclear_bonus.c",
        "ft_lstdelone_bonus.c",
        "ft_lstiter_bonus.c",
        "ft_lstlast_bonus.c",
        "ft_lstmap_bonus.c",
        "ft_lstnew_bonus.c",
        "ft_lstsize_bonus.c",
        "ft_memchr.c",
        "ft_memcmp.c",
        "ft_memcpy.c",
        "ft_memmove.c", // Asegúrate de que el archivo esté aquí
        "ft_memset.c",
        "ft_putchar_fd.c",
        "ft_putendl_fd.c",
        "ft_putstr_fd.c",
        "ft_split.c",
        "ft_strchr.c",
        "ft_strdup.c",
        "ft_striteri.c",
        "ft_strjoin.c",
        "ft_strlcat.c",
        "ft_strlcpy.c",
        "ft_strlen.c",
        "ft_strmapi.c",
        "ft_strncmp.c",
        "ft_strnstr.c",
        "ft_strrchr.c",
        "ft_strtrim.c",
        "ft_substr.c",
        "ft_tolower.c",
        "ft_toupper.c"
    };

    // Verificar que la cantidad de prototipos y archivos sea igual
    if (sizeof(prototypes) / sizeof(prototypes[0]) != sizeof(files) / sizeof(files[0])) {
        printf("Error: El número de prototipos no coincide con el número de archivos.\n");
        return 1; // Finalizar con error si no coinciden
    }

    int total = 0, correct = 0, fail = 0;

    printf("VERIFICACION DE PROTOTIPOS:\n");

    for (int i = 0; i < sizeof(prototypes) / sizeof(prototypes[0]); i++) {
        total++;

        // Primero verificamos si el archivo existe
        if (access(files[i], F_OK) == -1) {  
            // Si el archivo no existe, solo mostramos el mensaje de error
            printf("El archivo %s no se ha encontrado ❌\n", files[i]);
            fail++;
        } else {
            // Si el archivo existe, mostramos el prototipo y verificamos el contenido
            printf("Archivo %s, Prototipo esperado: '%s'", files[i], prototypes[i]);
            int result = verify_function_declaration(files[i], prototypes[i]);

            if (result) {
                printf(" ✅\n");
                correct++;
            } else {
                printf(" ❌\n");
                fail++;
            }
        }
    }

    printf("\nResumen:\nTotal: %d\nCorrectos: %d\nIncorrectos: %d\n", total, correct, fail);
    return 0;
}

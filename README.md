# 📚 Libft - Biblioteca de funciones en C

## 📌 Descripción

Libft es una biblioteca en C que reimplementa funciones estándar y añade otras útiles para la manipulación de memoria, cadenas de caracteres y listas enlazadas.

## 📂 Estructura del Proyecto

📦 libft  
├── 📄 libft.h          # Archivo de cabecera con los prototipos de funciones  
├── 📄 Makefile         # Archivo para compilar la biblioteca  
├── 📂 src             # Código fuente de las funciones  
│   ├── ft_strlen.c    # Implementación de ft_strlen  
│   ├── ft_strjoin.c   # Implementación de ft_strjoin  
│   ├── ft_memset.c    # Implementación de ft_memset  
│   ├── ft_atoi.c      # Implementación de ft_atoi  
│   ├── ft_tolower.c   # Implementación de ft_tolower  
│   ├── ...            # Otras funciones  
└── 📂 obj             # Archivos objeto generados tras la compilación  


## 📂 Funciones principales

### 🔠 **ft_strlen**
🎯 **Objetivo:** Calcula la longitud de una cadena de caracteres.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`
- **Salida:** `5`

📝 📏 ➡️ `5`

---

### 🔗 **ft_strjoin**
🎯 **Objetivo:** Une dos cadenas en una nueva.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, `"World"`
- **Salida:** `"HelloWorld"`

📝 `"Hello" ➕ "World" ➡️ "HelloWorld"`

---

### 💾 **ft_memset**
🎯 **Objetivo:** Llena un bloque de memoria con un valor específico.

🔹 **Ejemplo:**

- **Entrada:** `[0, 0, 0, 0]`, Valor: `1`
- **Salida:** `[1, 1, 1, 1]`

🏗️ 🟦🟦🟦🟦 ➡️ 🟥🟥🟥🟥

---

### 🔢 **ft_atoi**
🎯 **Objetivo:** Convierte un string a un número entero.

🔹 **Ejemplo:**

- **Entrada:** `"  -42  "`
- **Salida:** `-42`

📝 `"  -42  " ➡️ -42`

---

### 🔤 **ft_tolower**
🎯 **Objetivo:** Convierte un carácter a minúscula.

🔹 **Ejemplo:**

- **Entrada:** `'A'`
- **Salida:** `'a'`

🔡 A ➡️ a

---

### 🔠 **ft_toupper**
🎯 **Objetivo:** Convierte un carácter a mayúscula.

🔹 **Ejemplo:**

- **Entrada:** `'a'`
- **Salida:** `'A'`

🔠 a ➡️ A

---

### 🔢 **ft_isdigit**
🎯 **Objetivo:** Verifica si un carácter es un dígito.

🔹 **Ejemplo:**

- **Entrada:** `'5'`
- **Salida:** `1` (true)

🔢 5 ✅

---

### 🔠 **ft_isalpha**
🎯 **Objetivo:** Verifica si un carácter es una letra.

🔹 **Ejemplo:**

- **Entrada:** `'g'`
- **Salida:** `1` (true)

🔤 g ✅

---

### 🔗 **ft_strncmp**
🎯 **Objetivo:** Compara dos cadenas hasta un número determinado de caracteres.

🔹 **Ejemplo:**

- **Entrada:** `"hello"`, `"hella"`, `4`
- **Salida:** `0` (son iguales hasta 4 caracteres)

📏 `"hell" == "hell"` ✅

---

## 🔑 **Funciones de bonus**

### 💡 **ft_bzero**
🎯 **Objetivo:** Establece a cero un bloque de memoria.

🔹 **Ejemplo:**

- **Entrada:** `[1, 1, 1]`, Tamaño: `2`
- **Salida:** `[0, 0, 1]`

🏗️ 🟦🟦🟦 ➡️ 🟥🟥🟦

---

### 🧮 **ft_calloc**
🎯 **Objetivo:** Asigna memoria y la inicializa a cero.

🔹 **Ejemplo:**

- **Entrada:** 4 elementos de tipo `int`
- **Salida:** `[0, 0, 0, 0]`

---

### 📜 **ft_isalnum**
🎯 **Objetivo:** Verifica si un carácter es alfanumérico.

🔹 **Ejemplo:**

- **Entrada:** `'A'`
- **Salida:** `1` (true)

🔤 A ✅

---

### 🔑 **ft_isascii**
🎯 **Objetivo:** Verifica si un carácter es ASCII.

🔹 **Ejemplo:**

- **Entrada:** `'B'`
- **Salida:** `1` (true)

🔤 B ✅

---

### 🔢 **ft_isprint**
🎯 **Objetivo:** Verifica si un carácter es imprimible.

🔹 **Ejemplo:**

- **Entrada:** `' '`
- **Salida:** `1` (true)

🔤 `' '` ✅

---

### 💬 **ft_itoa**
🎯 **Objetivo:** Convierte un número entero en una cadena de caracteres.

🔹 **Ejemplo:**

- **Entrada:** `-42`
- **Salida:** `"-42"`

🔢 -42 ➡️ `"-42"`

---

### 🔗 **ft_lstadd_back_bonus**
🎯 **Objetivo:** Añade un nuevo elemento al final de la lista enlazada.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [1, 2]`, nuevo elemento: `3`
- **Salida:** `lista -> [1, 2, 3]`

---

### 🔗 **ft_lstadd_front_bonus**
🎯 **Objetivo:** Añade un nuevo elemento al principio de la lista enlazada.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [2, 3]`, nuevo elemento: `1`
- **Salida:** `lista -> [1, 2, 3]`

---

### 🔄 **ft_lstclear_bonus**
🎯 **Objetivo:** Elimina todos los elementos de la lista.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [1, 2, 3]`
- **Salida:** `lista -> []`

---

### 🔗 **ft_lstdelone_bonus**
🎯 **Objetivo:** Elimina un solo elemento de la lista.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [1, 2]`, eliminar elemento: `1`
- **Salida:** `lista -> [2]`

---

### 🔄 **ft_lstiter_bonus**
🎯 **Objetivo:** Aplica una función a cada elemento de la lista.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [1, 2]`, función: duplicar cada valor
- **Salida:** `lista -> [2, 4]`

---

### 🔗 **ft_lstlast_bonus**
🎯 **Objetivo:** Devuelve el último elemento de la lista.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [1, 2, 3]`
- **Salida:** `3`

---

### 🔗 **ft_lstmap_bonus**
🎯 **Objetivo:** Aplica una función a cada elemento de la lista y crea una nueva lista.

🔹 **Ejemplo:**

- **Entrada:** `lista -> [1, 2]`, función: multiplicar por 2
- **Salida:** `nueva lista -> [2, 4]`

---

## 📝 **Otros ejemplos con funciones de manipulación de memoria y cadenas**

### 🛠️ **ft_memchr**
🎯 **Objetivo:** Busca un carácter en un bloque de memoria.

🔹 **Ejemplo:**

- **Entrada:** `[1, 2, 3]`, buscar `2`
- **Salida:** Dirección de la posición donde se encuentra `2`

---

### 🔢 **ft_memcmp**
🎯 **Objetivo:** Compara dos bloques de memoria.

🔹 **Ejemplo:**

- **Entrada:** `[1, 2, 3]`, `[1, 2, 4]`
- **Salida:** `-1` (diferente en el último byte)

---

### 🖇️ **ft_memcpy**
🎯 **Objetivo:** Copia un bloque de memoria a otro.

🔹 **Ejemplo:**

- **Entrada:** `[1, 2, 3]`, destino: `[0, 0, 0]`
- **Salida:** `[1, 2, 3]`

---

### 🚚 **ft_memmove**
🎯 **Objetivo:** Mueve un bloque de memoria, manejando superposiciones.

🔹 **Ejemplo:**

- **Entrada:** `[1, 2, 3]`, mover 1 byte a la derecha
- **Salida:** `[2, 3, 3]`

---

### 🔣 **ft_putchar_fd**
🎯 **Objetivo:** Escribe un carácter en un archivo.

🔹 **Ejemplo:**

- **Entrada:** `'A'`, archivo: `"output.txt"`
- **Salida:** `'A'` en `"output.txt"`

---

### 📧 **ft_putendl_fd**
🎯 **Objetivo:** Escribe una cadena y un salto de línea en un archivo.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, archivo: `"output.txt"`
- **Salida:** `"Hello\n"` en `"output.txt"`

---

### ✏️ **ft_putstr_fd**
🎯 **Objetivo:** Escribe una cadena de caracteres en un archivo.

🔹 **Ejemplo:**

- **Entrada:** `"World"`, archivo: `"output.txt"`
- **Salida:** `"World"` en `"output.txt"`

---

### 🔪 **ft_split**
🎯 **Objetivo:** Divide una cadena en varias subcadenas.

🔹 **Ejemplo:**

- **Entrada:** `"Hello World"`, delimitador: `" "`
- **Salida:** `["Hello", "World"]`

---

### 🔍 **ft_strchr**
🎯 **Objetivo:** Busca un carácter en una cadena.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, buscar: `'o'`
- **Salida:** Dirección de la posición de `'o'`

---

### 📜 **ft_strdup**
🎯 **Objetivo:** Duplica una cadena de caracteres.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`
- **Salida:** `"Hello"`

---

### 🧪 **ft_striteri**
🎯 **Objetivo:** Aplica una función a cada carácter de una cadena.

🔹 **Ejemplo:**

- **Entrada:** `"abc"`, función: duplicar cada carácter
- **Salida:** `"aabbcc"`

---

### 🔗 **ft_strlcat**
🎯 **Objetivo:** Concatena dos cadenas con un límite de tamaño.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, `"World"`, límite: `15`
- **Salida:** `"HelloWorld"`

---

### 🔗 **ft_strlcpy**
🎯 **Objetivo:** Copia una cadena con un límite de tamaño.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, destino: `"Hi"`, límite: `6`
- **Salida:** `"Hello"` en destino

---

### 📝 **ft_strmapi**
🎯 **Objetivo:** Aplica una función a cada carácter de una cadena y crea una nueva.

🔹 **Ejemplo:**

- **Entrada:** `"abc"`, función: duplicar cada carácter
- **Salida:** `"aabbcc"`

---

### 🖋️ **ft_strnstr**
🎯 **Objetivo:** Busca una subcadena dentro de una cadena, con un límite de caracteres.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, buscar: `"ll"`, límite: `5`
- **Salida:** `"ll"`

---

### 🔍 **ft_strrchr**
🎯 **Objetivo:** Busca el último carácter en una cadena.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, buscar: `'l'`
- **Salida:** Dirección de la última posición de `'l'`

---

### 🧹 **ft_strtrim**
🎯 **Objetivo:** Elimina los caracteres especificados al principio y al final de una cadena.

🔹 **Ejemplo:**

- **Entrada:** `"  Hello  "`, eliminar: `" "`
- **Salida:** `"Hello"`

---

### 🔄 **ft_substr**
🎯 **Objetivo:** Devuelve una subcadena de una cadena.

🔹 **Ejemplo:**

- **Entrada:** `"Hello"`, inicio: `1`, longitud: `3`
- **Salida:** `"ell"`

---

## 📜 **Licencia**

Este proyecto se encuentra bajo la Licencia MIT. Para más detalles, consulta el archivo `LICENSE`.

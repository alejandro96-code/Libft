/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:29:11 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:23 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mylist;

	mylist = malloc(sizeof(struct s_list));
	if (!mylist)
		return (NULL);
	mylist -> next = NULL;
	mylist -> content = content;
	return (mylist);
}

#ifdef MAIN
#include <stdio.h>
int main(void)
{
	t_list *nodo = ft_lstnew("Hola");
	printf("Contenido: %s\n", (char *)nodo->content);
	printf("Next: %p\n", (void *)nodo->next);
	free(nodo);
	return (0);
}
#endif

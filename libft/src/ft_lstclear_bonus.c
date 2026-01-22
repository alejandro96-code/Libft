/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:48 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:23 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;

	if (lst && del)
	{
		while (*lst)
		{
			a = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = a;
		}
	}
}

#ifdef MAIN
#include <stdio.h>
#include <string.h>
void del(void *content) { free(content); }
int main(void)
{
	t_list *n1 = ft_lstnew(strdup("1"));
	t_list *n2 = ft_lstnew(strdup("2"));
	n1->next = n2;
	printf("Lista creada\n");
	ft_lstclear(&n1, del);
	printf("Lista limpiada: %p\n", (void *)n1);
	return (0);
}
#endif

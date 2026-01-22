/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:29:02 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:23 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst->next;
	return (lst);
}

#ifdef MAIN
#include <stdio.h>
int main(void)
{
	t_list *n1 = ft_lstnew("primero");
	t_list *n2 = ft_lstnew("segundo");
	t_list *n3 = ft_lstnew("ultimo");
	n1->next = n2;
	n2->next = n3;
	t_list *last = ft_lstlast(n1);
	printf("Último: %s\n", (char *)last->content);
	free(n3);
	free(n2);
	free(n1);
	return (0);
}
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:57 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:24 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst -> next;
	}
}

#ifdef MAIN
#include <stdio.h>
void print(void *content) { printf("-> %s\n", (char *)content); }
int main(void)
{
	t_list *n1 = ft_lstnew("uno");
	t_list *n2 = ft_lstnew("dos");
	t_list *n3 = ft_lstnew("tres");
	n1->next = n2;
	n2->next = n3;
	ft_lstiter(n1, print);
	free(n3);
	free(n2);
	free(n1);
	return (0);
}
#endif

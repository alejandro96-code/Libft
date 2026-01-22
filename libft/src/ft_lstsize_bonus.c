/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:29:16 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:23 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

#ifdef MAIN
#include <stdio.h>
int main(void)
{
	t_list *n1 = ft_lstnew("1");
	t_list *n2 = ft_lstnew("2");
	t_list *n3 = ft_lstnew("3");
	n1->next = n2;
	n2->next = n3;
	printf("Tamaño: %d\n", ft_lstsize(n1));
	free(n3);
	free(n2);
	free(n1);
	return (0);
}
#endif

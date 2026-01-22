/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:36 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:23 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

#ifdef MAIN
#include <stdio.h>
int main(void)
{
	t_list *lista = ft_lstnew("primero");
	t_list *nuevo = ft_lstnew("ultimo");
	ft_lstadd_back(&lista, nuevo);
	printf("1º: %s\n", (char *)lista->content);
	printf("2º: %s\n", (char *)lista->next->content);
	free(lista->next);
	free(lista);
	return (0);
}
#endif

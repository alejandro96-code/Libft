/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:53 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:23 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		if (lst -> content)
			del(lst -> content);
		free(lst);
	}
}

#ifdef MAIN
#include <stdio.h>
#include <string.h>
void del(void *content) { free(content); }
int main(void)
{
	char *str = strdup("test");
	t_list *nodo = ft_lstnew(str);
	printf("Antes: %s\n", (char *)nodo->content);
	ft_lstdelone(nodo, del);
	printf("Nodo eliminado\n");
	return (0);
}
#endif

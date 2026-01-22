/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:29:06 by alejanr2          #+#    #+#             */
/*   Updated: 2026/01/22 15:10:24 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	map = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			if (content)
				del(content);
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, node);
		lst = lst->next;
	}
	return (map);
}

#ifdef MAIN
#include <stdio.h>
#include <string.h>
void del(void *content) { free(content); }
void *dup(void *content) { return strdup((char *)content); }
int main(void)
{
	t_list *n1 = ft_lstnew("a");
	t_list *n2 = ft_lstnew("b");
	n1->next = n2;
	t_list *nueva = ft_lstmap(n1, dup, del);
	printf("Original: %s, Copia: %s\n", (char *)n1->content, (char *)nueva->content);
	ft_lstclear(&nueva, del);
	free(n2);
	free(n1);
	return (0);
}
#endif

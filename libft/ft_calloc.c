/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:27:55 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:27:58 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t elems, size_t size)
{
	void	*ptr;

	ptr = malloc(elems * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * elems);
	return (ptr);
}

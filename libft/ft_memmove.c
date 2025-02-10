/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:29:36 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:29:36 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)dest;
	if (src == dest)
		return (dest);
	if (dest < src)
	{
		while (i < (int)n)
		{
			str[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			str[n] = ((char *)src)[n];
	}
	return (dest);
}

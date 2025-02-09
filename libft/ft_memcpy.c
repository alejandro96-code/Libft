/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:29:30 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:29:31 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	if (!dest && !src)
		return (0);
	str = (char *)dest;
	while (i < (int)count)
	{
		str[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

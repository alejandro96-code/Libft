/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:30:25 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:30:26 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = dst_len;
	j = 0;
	if (dstsize > src_len + dst_len)
		dstsize = src_len + dst_len + 1;
	while (i < dstsize - 1 && src[j] != '\0' && dstsize > 0)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	if (src_len + dst_len > src_len + dstsize)
		return (src_len + dstsize);
	else
		return (src_len + dst_len);
}

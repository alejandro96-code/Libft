/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:30:44 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:30:45 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count && (string1[i] || string2[i]))
	{
		if (string1[i] - string2[i])
			return (string1[i] - string2[i]);
		i++;
	}
	return (0);
}

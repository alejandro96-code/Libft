/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:09 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:28:10 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isalpha('A')); // Esto es 1
	printf("%d", ft_isalpha('a')); // Esto es 1
	printf("%d", ft_isalpha('á')); // Esto es 0
	printf("%d", ft_isalpha('6')); // Esto es 0
}
*/

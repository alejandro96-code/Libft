/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:28:04 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:28:05 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../librery/libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_isalnum('A')); // Esto es 1
	printf("%d", ft_isalnum('a')); // Esto es 1
	printf("%d", ft_isalnum('4')); // Esto es 1
	printf("%d", ft_isalnum('á')); // Esto es 0
}
*/
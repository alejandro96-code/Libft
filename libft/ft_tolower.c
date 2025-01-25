/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:31:13 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:31:14 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	return (ch);
}
/*
int	main(void)
{
	printf("%d", ft_tolower('B')); // Esto es b
	printf("%d", ft_tolower('P')); // Esto es p
}
*/

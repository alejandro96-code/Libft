/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:31:18 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:31:19 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}
/*
int	main(void)
{
	printf("%d", ft_toupper('c')); // Esto es C
	printf("%d", ft_toupper('h')); // Esto es H
}
*/

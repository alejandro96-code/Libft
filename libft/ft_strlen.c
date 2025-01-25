/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejanr2 <alejanr2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 13:30:34 by alejanr2          #+#    #+#             */
/*   Updated: 2024/12/17 13:30:35 by alejanr2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%d", ft_strlen('Alejandro')); // Esto es 9
	printf("%d", ft_strlen('12348')); // Esto es 5
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:38:26 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 21:08:56 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int y, int z)
{
	char	e;	
	int		a;
	int		b;

	a = y / 10;
	y = y % 10;
	b = z / 10;
	z = z % 10;
	e = a + '0';
	write(1, &e, 1);
	e = y + '0';
	write(1, &e, 1);
	write(1, " ", 1);
	e = b + '0';
	write(1, &e, 1);
	e = z + '0';
	write(1, &e, 1);
	if (a != 9 | y != 8 | b != 9 | z != 9)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	y;
	int	z;

	y = 00;
	while (y <= 98)
	{
		z = y + 01;
		while (z <= 99)
		{
			ft_write(y, z);
			z++;
		}
		y++;
	}
}

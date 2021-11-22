/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:06:08 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/18 18:06:13 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_digits(int v)
{
	int	c;

	c = 0;
	while (v != 0)
	{
		v = v / 10;
		c++;
	}
	return (c);
}

int	def_value(int i)
{
	int	v;

	i = i - 2;
	v = 1;
	while (i >= 0)
	{
		v = v * 10;
		i--;
	}
	return (v);
}

void	main_write(int i, int nb, int v)
{
	int		c;
	int		d;
	char	w;

	while (i > 0)
	{
		c = nb / v;
		d = count_digits(c);
		if (d != 1)
		{
			while (d >= 1)
			{
				c = c % 10;
				d--;
			}
			w = c + '0';
		}
		else
			w = c + '0';
		write(1, &w, 1);
		i--;
		v = v / 10;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		v;

	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		nb = 147483648;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = count_digits(nb);
	v = def_value(i);
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, "-", 1);
	}
	main_write(i, nb, v);
}

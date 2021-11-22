/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:25:02 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/18 19:25:03 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int nbr, char *base, int size)
{
	unsigned int	p;
	char			a;

	if (nbr < 0)
	{
		write (1, "-", 1);
		p = nbr * (-1);
	}
	else
		p = nbr;
	if (p >= (unsigned int)size)
		ft_print(p / size, base, size);
	a = base[p % size];
	write (1, &a, 1);
}

int	ft_base(char *base)
{
	int	p;

	p = 0;
	while (base[p] != '\0')
	{
		if (base[p] == '+' || base[p] == '-' || base[p] == base[p + 1])
			return (0);
		p++;
	}
	if (p <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	p;

	p = 0;
	if (ft_base(base) == 1)
	{
		while (base[p] != '\0')
			p++;
		ft_print(nbr, base, p);
	}
}

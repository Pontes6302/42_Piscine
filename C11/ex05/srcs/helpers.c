/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 01:33:38 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/26 01:33:40 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headers.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	p;
	int	n;
	int	sn;

	n = 0;
	sn = 1;
	p = 0;
	while (str[p] == ' ' || str[p] == '\t' || str[p] == '\n'
		|| str[p] == '\v' || str[p] == '\f' || str[p] == '\r')
		p++;
	while (str[p] == '-' || str[p] == '+')
	{
		if (str[p] == '-')
			sn = sn * -1;
		p++;
	}
	while (str[p] > 47 && str[p] < 58)
	{
		n = n * 10 + (str[p] - 48);
		p++;
	}
	if (sn == -1)
		n = n * sn;
	return (n);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr_unsigned;

	if (nb < 0)
	{
		nbr_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		nbr_unsigned = (unsigned int)nb;
	if (nbr_unsigned >= 10)
	{
		ft_putnbr(nbr_unsigned / 10);
		ft_putnbr(nbr_unsigned % 10);
	}
	else
		ft_putchar(nbr_unsigned + '0');
}

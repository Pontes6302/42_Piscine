/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 22:39:30 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/18 22:39:32 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	base_find(char f, char *base)
{
	int	p;

	p = 0;
	while (base[p])
	{
		if (f == base[p])
			return (p);
		p++;
	}
	return (-1);
}

int	counter(char *base)
{
	int	p;

	p = 0;
	while (base[p])
		p++;
	return (p);
}

int	checker(char *base)
{
	int	p;
	int	a;

	p = 0;
	if (counter(base) == 0 || counter(base) == 1)
		return (0);
	while (base[p])
	{
		a = 1;
		while (base[p + a])
		{
			if (base[p] == base[p + a])
				return (0);
			a++;
		}
		if (base[p] == '+' || base[p] == '-' || base[p] < 32 || base[p] > 126)
			return (0);
		p++;
	}
	return (1);
}

int	*blank_signal(char *str, int *pn)
{
	pn[0] = 0;
	pn[1] = 1;
	while (str[pn[0]] == ' ' || str[pn[0]] == '\t' || str[pn[0]] == '\n'
		|| str[pn[0]] == '\v' || str[pn[0]] == '\f' || str[pn[0]] == '\r')
		pn[0] = pn[0] + 1;
	while (str[pn[0]] == '-' || str[pn[0]] == '+')
	{
		if (str[pn[0]] == '-')
			pn[1] = pn[1] * -1;
		pn[0] = pn[0] + 1;
	}
	return (pn);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nbr;
	int	pn[2];

	nbr = 0;
	blank_signal(str, pn);
	if (checker(base) == 0)
		return (0);
	while (str[pn[0]])
	{
		nbr *= counter(base);
		if (base_find(str[pn[0]], base) == -1)
			return (0);
		nbr += base_find(str[pn[0]], base);
		pn[0] = pn[0] + 1;
	}
	return (nbr * pn[1]);
}

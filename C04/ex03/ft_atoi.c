/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:11:06 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/18 18:11:07 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

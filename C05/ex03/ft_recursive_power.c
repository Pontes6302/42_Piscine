/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:55:00 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/19 17:55:03 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	rs;

	rs = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (rs * ft_recursive_power(nb, power - 1));
}

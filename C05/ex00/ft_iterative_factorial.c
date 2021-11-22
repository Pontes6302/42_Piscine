/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:11:33 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/19 17:11:34 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 0)
		{
			i *= nb;
			nb--;
		}
		return (i);
	}
	return (0);
}

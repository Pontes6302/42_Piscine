/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:24:07 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/21 19:24:09 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	p;
	int	*nb;
	int	i;

	if (min >= max)
		return (0);
	p = max - min;
	nb = malloc(p * sizeof(int));
	i = 0;
	while (i < p)
	{
		nb[i] = min + i;
		i++;
	}
	return (nb);
}

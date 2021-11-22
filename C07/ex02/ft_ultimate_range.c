/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:13:36 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/21 21:13:37 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;
	int	b;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	b = max - min;
	temp = (int *)malloc(b * sizeof(int));
	if (b == 0)
	{
		*range = 0;
		return (-1);
	}
	*range = temp;
	i = 0;
	while (i < b)
	{
		temp[i] = min + i;
		i++;
	}
	return (b);
}

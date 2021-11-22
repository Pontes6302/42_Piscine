/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 00:12:27 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/26 00:12:28 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*r;
	int	i;

	i = 0;
	r = malloc(length * sizeof(int));
	while (i < length)
	{
		r[i] = f(tab[i]);
		i++;
	}
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 23:56:10 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/25 23:56:14 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(f)(tab[i]);
		i++;
	}
}

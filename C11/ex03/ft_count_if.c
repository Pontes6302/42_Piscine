/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 00:27:43 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/26 00:27:44 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < length)
	{
		if ((f)(tab[i]) != 0)
			r++;
		i++;
	}
	return (r);
}

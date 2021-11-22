/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:50:12 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/10 21:50:14 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	b;

	b = 0;
	while (b < size - 1)
	{
		a = 0;
		while (a < size - b - 1)
		{
			if (tab[a] > tab[a + 1])
			{
				temp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = temp;
			}
			a++;
		}
		b++;
	}
}

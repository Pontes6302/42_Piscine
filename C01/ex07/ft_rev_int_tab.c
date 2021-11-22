/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 21:10:45 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/11 16:28:52 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	s;
	int	a;

	a = 0;
	s = size / 2;
	while (s > 0)
	{
		t = tab[a];
		tab[a] = tab[size - 1 - a];
		tab[size - 1 - a] = t;
		s--;
		a++;
	}
}

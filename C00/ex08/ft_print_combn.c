/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:47:44 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 20:47:46 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_search(int top, int combn[], int *p)
{
	int	n;
	int	dig;

	n = *p;
	while ((*p)--)
	{
		dig = combn[*p];
		if (dig < --top)
		{
			while (*p < n)
			{
				combn[(*p)++] = ++(dig);
			}
			ft_putchar(',');
			ft_putchar(' ');
			return ;
		}
	}
}

void	ft_first_position(int n, int combn[], int *p)
{
	*p = 0;
	while (*p < n)
	{
		combn[*p] = *p;
		(*p)++;
	}
}

void	ft_print_combn(int n)
{
	int	combn[9];
	int	p;
	int	e;
	int	top;

	if (n <= 0 || n >= 10)
		return ;
	else
	{
		ft_first_position(n, combn, &p);
		while (p > 0)
		{
			top = 10;
			e = 0;
			while (e < n)
			{
				ft_putchar(combn[e] + '0');
				e++;
			}
			ft_search(top, combn, &p);
		}
	}
}

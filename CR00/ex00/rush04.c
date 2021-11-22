/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:56:18 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/07 18:44:13 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char x);

void	print_h_first(int x)
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('A');
		else
		{
			if (a == x)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		a++;
	}
	ft_putchar(10);
}

void	print_h_last(int x)
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('C');
		else
		{
			if (a == x)
				ft_putchar('A');
			else
				ft_putchar('B');
		}
		a++;
	}
	ft_putchar(10);
}

void	print_h_middle(int x)
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1 || a == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
		a++;
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int	a;

	a = 1;
	while (a <= y)
	{
		if (a == 1)
			print_h_first(x);
		else
		{
			if (a == y)
				print_h_last(x);
			else
				print_h_middle(x);
		}
		a++;
	}
}

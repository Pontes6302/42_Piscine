/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:35:56 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/07 18:41:41 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char x);

void	print_h_first_and_last(int x)
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1 || a == x)
			ft_putchar('o');
		else
			ft_putchar('-');
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
			ft_putchar('|');
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
		if (a == 1 || a == y)
			print_h_first_and_last(x);
		else
			print_h_middle(x);
		a++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 01:11:20 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/26 01:11:21 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <headers.h>

void	calculate(int a, int b, int (*operation)(int, int))
{
	ft_putnbr(operation(a, b));
	ft_putchar('\n');
}

void	pre_calc(char **argv)
{
	if (*argv[2] == '+')
		calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), add);
	else if (*argv[2] == '-')
		calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), sub);
	else if (*argv[2] == '/')
	{
		if (*argv[3] == '0')
		{
			ft_putstr("Stop : division by zero\n");
			return ;
		}
		calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), div);
	}
	else if (*argv[2] == '%')
	{
		if (*argv[3] == '0')
		{
			ft_putstr("Stop : modulo by zero\n");
			return ;
		}
		calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), rest);
	}
	else if (*argv[2] == '*')
		calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), mult);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	else if ((*argv[2] == '+' || *argv[2] == '-' || *argv[2] == '/'
			|| *argv[2] == '%' || *argv[2] == '*')
		&& ft_strlen(argv[2]) == 1)
		pre_calc(argv);
	else
		ft_putstr("0\n");
	return (0);
}

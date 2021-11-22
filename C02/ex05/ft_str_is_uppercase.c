/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:30:35 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 17:30:37 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;
	int	p;

	a = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 65 || str[p] > 90)
			a = 0;
		p++;
	}
	return (a);
}

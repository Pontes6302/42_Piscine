/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:33:04 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 17:33:06 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;
	int	p;

	a = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 32 || str[p] == 127)
			a = 0;
		p++;
	}
	return (a);
}

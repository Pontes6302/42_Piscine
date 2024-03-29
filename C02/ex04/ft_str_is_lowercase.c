/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lower_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 17:27:37 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 17:27:38 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;
	int	p;

	a = 1;
	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] < 97 || str[p] > 122)
			a = 0;
		p++;
	}
	return (a);
}

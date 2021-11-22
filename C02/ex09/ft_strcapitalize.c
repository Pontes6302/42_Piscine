/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:00:28 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 18:00:30 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] > 64 && str[p] < 91)
			str[p] = str[p] + 32;
		if (str[p] > 96 && str[p] < 123)
		{
			if (p == 0)
				str[p] = str[p] - 32;
			else
			{
				if (!((str[p - 1] > 47 && str[p - 1] < 58)
						|| (str[p - 1] > 96 && str[p - 1] < 123)
						|| (str[p - 1] > 64 && str[p - 1] < 91)))
					str[p] = str[p] - 32;
			}
		}
		p++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:29:44 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/14 20:29:45 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	p;

	p = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[p] != '\0')
	{
		if (str[p] == to_find[0])
		{
			a = 1;
			while (to_find[a] != '\0' && str[p + a] == to_find[a])
				a++;
			if (to_find[a] == '\0')
				return (&str[p]);
		}
		p++;
	}
	return (0);
}

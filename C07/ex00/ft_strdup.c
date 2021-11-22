/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:22:09 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/21 18:22:10 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p])
		p++;
	return (p);
}

char	*ft_strdup(char *str)
{
	int		p;
	char	*str2;

	str2 = (char *)malloc(ft_strlen(str) * sizeof(char));
	p = 0;
	while (str[p])
	{
		str2[p] = str[p];
		p++;
	}
	str2[p] = '\0';
	return (str2);
}

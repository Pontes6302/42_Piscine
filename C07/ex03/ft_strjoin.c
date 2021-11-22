/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:29:26 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/22 01:04:20 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	p;

	p = 0;
	while (str[p])
		p++;
	return (p);
}

int	ft_length(int size, char **strs, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	length = length + ((size - 1) * ft_strlen(sep));
	return (length);
}

char	*ft_strcat(char *dest, char *src)
{
	int	p;
	int	i;

	i = 0;
	p = 0;
	while (dest[p] != '\0')
		p++;
	while (src[i] != '\0')
	{
		dest[p + i] = src[i];
		i++;
	}
	dest[p + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		p;
	char	*temp;

	p = 0;
	if (size > 0)
	{
		temp = malloc(ft_length(size, strs, sep) * sizeof(char));
		*temp = '\0';
		while (p < size)
		{
			ft_strcat(temp, strs[p]);
			if (p < size - 1)
				ft_strcat(temp, sep);
			p++;
		}
		return (temp);
	}
	temp = malloc(sizeof(char));
	*temp = 0;
	return (temp);
}

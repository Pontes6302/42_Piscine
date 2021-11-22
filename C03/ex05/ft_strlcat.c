/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:56:45 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/15 16:11:37 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	p;
	int				l;

	i = 0;
	p = 0;
	l = 0;
	while (src[l])
		l++;
	while (dest[i] && i < size)
		i++;
	while (src[p] && (p + i + 1) < size)
	{
		dest[i + p] = src[p];
		p++;
	}
	if (i < size)
		dest[i + p] = '\0';
	return (i + l);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 00:55:35 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/13 00:55:38 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
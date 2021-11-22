/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:18:06 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/14 20:18:08 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n1;
	unsigned int	n2;

	n1 = 0;
	n2 = 0;
	while (dest[n1] != '\0')
		n1++;
	while (src[n2] != '\0' && n2 < nb)
	{
		dest[n1] = src[n2];
		n1++;
		n2++;
	}
	dest[n1] = '\0';
	return (dest);
}

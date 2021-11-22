/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_non_printable.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 21:38:32 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/12 21:38:33 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	w;

	i = 0;
	while (str[i])
	{
		w = str[i];
		if (!(w >= ' ' && w <= 126))
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[w / 16], 1);
			write(1, &"0123456789abcdef"[w % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:46:48 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/10 18:04:41 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char w)
{
	write(1, &w, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		writer(*str);
		str++;
	}
}

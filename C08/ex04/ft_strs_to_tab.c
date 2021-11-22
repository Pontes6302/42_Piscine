/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 04:03:22 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/23 04:03:23 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

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

	str2 = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	p = 0;
	while (str[p])
	{
		str2[p] = str[p];
		p++;
	}
	str2[p] = '\0';
	return (str2);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*cnv;

	i = 0;
	cnv = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!cnv)
		return (0);
	while (i < ac)
	{
		cnv[i].size = ft_strlen(av[i]);
		cnv[i].str = av[i];
		cnv[i].copy = ft_strdup(av[i]);
		i++;
	}
	cnv[i].size = 0;
	cnv[i].str = 0;
	cnv[i].copy = 0;
	return (cnv);
}

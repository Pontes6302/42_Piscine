/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 23:52:53 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/24 23:52:54 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	ft_finder(char c, char *charset)
{
	int	p;

	p = 0;
	while (charset[p])
	{
		if (c == charset[p])
			return (1);
		p++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count(char *str, char *charset)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (str[i])
	{
		if (ft_finder(str[i + 1], charset) == 1
			&& ft_finder(str[i], charset) == 0)
			w++;
		i++;
	}
	return (w);
}

void	writer(char *dest, char *from, char *charset)
{
	int	p;

	p = 0;
	while (ft_finder(from[p], charset) == 0)
	{
		dest[p] = from[p];
		p++;
	}
	dest[p] = '\0';
}

void	splitter(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (ft_finder(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (ft_finder(str[i + j], charset) == 0)
				j++;
			split[w] = (char *)malloc(sizeof(char) * (j + 1));
			writer(split[w], str + i, charset);
			i = i + j;
			w++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		wc;

	wc = count(str, charset);
	res = (char **) malloc ((wc + 1) * sizeof(char *));
	splitter(res, str, charset);
	res[wc] = 0;
	return (res);
}

/*int	main(void)
{
	int		index;
	char	**split;

	printf("count occ: %d\n", count("Ola e adeus meu amigo", "am"));
	split = ft_split("Ola e adeus meu amigo", "am");
	index = 0;
	//printf("tab start\n");
	while (split[index])
	{
		printf("tab[%d]: $%s$\n", index, split[index]);
		fflush(stdout);
		index++;
	}
	//printf("tab end\n");
}
*/
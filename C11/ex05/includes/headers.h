/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 01:11:41 by sifreita          #+#    #+#             */
/*   Updated: 2021/08/26 01:12:47 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERS_H
# define HEADERS_H

# include <unistd.h>

int		add(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		rest(int a, int b);
int		mult(int a, int b);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif

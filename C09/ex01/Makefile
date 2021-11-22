# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sifreita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 19:25:56 by sifreita          #+#    #+#              #
#    Updated: 2021/08/24 23:41:36 by sifreita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strlen.o srcs/ft_strcmp.o srcs/ft_swap.o
INCS = includes
NAME = libft.a

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

.c.o:
	gcc -Wall -Wextra -Werror -I ${INCS} -c $< -o ${<:c=o} 
        
clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o

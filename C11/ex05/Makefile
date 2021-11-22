# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sifreita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/26 01:13:20 by sifreita          #+#    #+#              #
#    Updated: 2021/08/26 01:13:21 by sifreita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/do-op.c srcs/helpers.c srcs/operations.c
OBJS = ${SRCS:.c=.o}
INCS = includes
NAME = do-op

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o ${<:c=o} -I ${INCS} -g

all: ${OBJS}
	gcc -o ${NAME} ${OBJS} -g

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re .c.o
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beomjuki <beomjuki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 18:06:05 by beomjuki          #+#    #+#              #
#    Updated: 2023/02/27 18:53:02 by beomjuki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/do-op.c srcs/ft_add.c srcs/ft_minus.c srcs/ft_multi.c srcs/ft_modul.c srcs/ft_atoi.c srcs/ft_divid.c srcs/ft_putnbr.c
OBJS	= ${SRCS:.c=.o}
NAME	= do-op
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all:
	${CC} ${CFLAGS}  ${SRCS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all



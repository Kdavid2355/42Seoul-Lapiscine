SRC		= main1.c make_map.c map_malloc.c subfuc.c make_objects.c free_map.c dp.c
OBJS	= ${SRC:.c=.o}
NAME	= bsq
HEAD	= bsq.h
CFLAGS	= -Wall -Wextra -Werror -I ${HEAD}
RM		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
	gcc -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY	= all clean fclean re

SRC     = main.c create_map_bin.c subfuc.c print_map.c free_map.c
OBJS    = ${SRC:.c=.o}
NAME    = bsq
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f
all:    ${NAME}
${NAME}:    ${OBJS}
    gcc -o ${NAME} ${OBJS}

clean:
   	${RM} ${NAME}

fclean: clean
    ${RM} ${NAME}
re: fclean all
.PHONY  = all clean fclean re

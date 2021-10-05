SRCS	= isalpha.c isgigit.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft

CC		= cc

RM		= rm -f

AR		= ar rc

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
			${CC} -O ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

SRCS	= isalpha.c isdigit.c isalnum.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= cc

RM		= rm -f

AR		= ar -rcs

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
			${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

TFILE	= test.c

TNAME	= test

TOBJS	= ${TFILE:.c=.o}

test:	${TOBJS}
		${CC} ${CFLAGS} ${TFILE} -L. -lft
		./a.out ${ARGS}
tclean:	fclean
			${RM} ${TOBJS}
			${RM} ${TNAME}
			${RM} a.out
			${RM} -drf a.out.dSYM
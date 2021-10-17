SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

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

.PHONY:	all clean fclean re
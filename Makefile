SRCS	=	ft_strlen.c		ft_isalpha.c	ft_memchr.c		ft_toupper.c \
			ft_strchr.c		ft_isdigit.c	ft_memset.c 	ft_tolower.c \
			ft_strrchr.c	ft_isalnum.c	ft_memcpy.c		ft_atoi.c \
			ft_strncmp.c	ft_isascii.c	ft_memmove.c	ft_calloc.c \
			ft_strnstr.c	ft_isprint.c	ft_memcmp.c 	ft_bzero.c \
			ft_strdup.c		ft_strtrim.c \
			ft_substr.c		ft_strlcpy.c \
			ft_strjoin.c	ft_strlcat.c \

OBJS	= ${SRCS:.c=.o}

HEADER	= libft.h

NAME	= libft.a

CC		= gcc

RM		= rm -f

AR		= ar -rcs

CFLAGS	= -Wall -Wextra -Werror -g

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS} ${HEADER}
			${AR} ${NAME} ${OBJS}
			${MAKE} clean

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
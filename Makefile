NAME	= libft.a

HEADER	= libft.h

SRCS	=	ft_strlen.c		ft_isalpha.c	ft_toupper.c	ft_memchr.c \
			ft_strchr.c		ft_isdigit.c 	ft_tolower.c	ft_memset.c \
			ft_strrchr.c	ft_isalnum.c	ft_atoi.c		ft_memcpy.c \
			ft_strncmp.c	ft_isascii.c	ft_calloc.c 	ft_memmove.c \
			ft_strnstr.c	ft_isprint.c	ft_bzero.c		ft_memcmp.c \
			ft_strdup.c		ft_strtrim.c 	ft_split.c 		ft_putchar_fd.c \
			ft_substr.c		ft_strlcpy.c	ft_itoa.c 		ft_putstr_fd.c \
			ft_strjoin.c	ft_strlcat.c 					ft_putendl_fd.c \
			ft_striteri.c	ft_strmapi.c					ft_putnbr_fd.c

SRCS_B	=	ft_lstnew.c		ft_lstadd_front.c				ft_lstsize.c \
			ft_lstlast.c	ft_lstadd_back.c				ft_lstdelone.c \
			ft_lstclear.c	ft_lstiter.c					ft_lstmap.c

.PHONY:	all clean fclean re bonus

OBJS	= ${SRCS:.c=.o}

OBJS_B	= ${SRCS_B:.c=.o}

CC		= cc

RM		= rm -f

AR		= ar -rcs

CFLAGS	= -Wall -Wextra -Werror -I$(HEADER)

$(NAME):	${OBJS} ${HEADER}
			${AR} ${NAME} $?

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

bonus:
		@make OBJS="$(OBJS_B)" all


all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJS_B}

fclean: clean
		${RM} ${NAME}

re:		fclean all

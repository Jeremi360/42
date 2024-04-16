# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 09:41:14 by jbiernac          #+#    #+#              #
#    Updated: 2024/04/16 09:44:13 by jbiernac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = libft/ft_itoa.c libft/ft_lstadd_back.c libft/ft_lstadd_front.c \
	libft/ft_lstclear.c libft/ft_lstdelone.c libft/ft_lstiter.c \
	libft/ft_lstlast.c libft/ft_lstmap.c libft/ft_lstnew.c \
	libft/ft_lstsize.c libft/ft_memchr.c libft/ft_memcmp.c \
	libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c \
	libft/ft_putchar_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c \
	libft/ft_putstr_fd.c libft/ft_split.c libft/ft_strchr.c \
	libft/ft_strdup.c libft/ft_striteri.c libft/ft_strjoin.c \
	libft/ft_strlcat.c libft/ft_strlcpy.c libft/ft_strlen.c \
	libft/ft_strmapi.c libft/ft_strncmp.c libft/ft_strnstr.c \
	libft/ft_strrchr.c libft/ft_strtrim.c libft/ft_substr.c \
	libft/ft_tolower.c libft/ft_toupper.c

# BONUS = 

# BONUS_OBJS = $(BONUS:.c=.o)
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

CC = clang

FLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

${OBJS}: ${SRCS}
	${CC} ${FLAGS} -c ${SRCS}

all:
	${CC} ${FLAGS} -c ${SRCS}
	ar rcs ${NAME} ${OBJS}

# bonus:
# 	${CC} ${FLAGS} -c ${BONUS} ${SRCS}
# 	ar rcs ${NAME} ${BONUS_OBJS} ${OBJS}

clean:
	rm -rf ${OBJS};
#	rm -rf ${BONUS_OBJS};

fclean: clean
	rm -rf ${NAME};

re: fclean all

.PHONY: all clean fclean re



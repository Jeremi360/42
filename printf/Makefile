# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 09:41:14 by jbiernac          #+#    #+#              #
#    Updated: 2024/05/11 12:10:58 by jbiernac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_hex.c ft_printf.c ft_strlcat.c ft_strdup.c\
	ft_split.c ft_putnbr_fd.c ft_putendl_fd.c ft_memmove.c \
	ft_itoa.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_toupper.c ft_tolower.c ft_substr.c ft_strtrim.c ft_strrchr.c \
	ft_strnstr.c ft_strncmp.c ft_strmapi.c ft_strlen.c \
	ft_strlcpy.c ft_strjoin.c ft_striteri.c ft_strchr.c \
	ft_putstr_fd.c ft_putchar_fd.c ft_isprint.c \
	ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c \
	ft_calloc.c ft_bzero.c ft_atoi.c ft_lstsize.c \
	ft_lstnew.c ft_lstmap.c ft_lstlast.c ft_lstiter.c \
	ft_lstdelone.c ft_lstclear.c ft_lstadd_front.c ft_lstadd_back.c 

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



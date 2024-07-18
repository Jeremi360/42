# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 09:41:14 by jbiernac          #+#    #+#              #
#    Updated: 2024/05/22 17:44:13 by jbiernac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c \
	ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
	ft_lstnew.c ft_lstsize.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_print_char.c ft_print_hex.c \
	ft_print_int.c ft_print_str.c ft_print_unit.c ft_printf.c \
	ft_print_ptr.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c

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



# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 15:48:18 by jeremi360         #+#    #+#              #
#    Updated: 2024/03/23 15:52:36 by jeremi360        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## all *.c files in the current directory without *_bonus.c files
SRCS	= $(filter-out %_bonus.c, $(wildcard *.c))
BONUS = $(wildcard *_bonus.c)
BONUS_OBJS = $(BONUS:.c=.o)
OBJS = $(SRCS:.c=.o)
NAME	= libft.a

CC = clang

FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

all:
	$(CC) $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

bonus:
	$(CC) $(FLAGS) -c $(BONUS) $(SRCS)
	ar rcs $(NAME) $(BONUS_OBJS) $(OBJS)

clean:
	if [ -f $(OBJS) ]; then rm $(OBJS); fi
	if [ -f $(BONUS_OBJS) ]; then rm $(BONUS_OBJS); fi

fclean:
	if [ -f $(NAME) ]; then rm $(NAME); fi

re:
	fclean all

.PHONY: all bonus clean fclean re


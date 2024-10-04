# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 13:48:18 by yogun             #+#    #+#              #
#    Updated: 2024/10/04 12:54:10 by jbiernac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/
OBJ_DIR = obj/
BONUS = checker
SRC_DIR = src/

SRC_1 = src/push_swap/push_swap.c \

SRC_2 =	src/push_swap/algorithm.c \
		src/push_swap/ft_add_back.c \
		src/push_swap/ft_stack_new.c \
		src/push_swap/ft_check_utils.c \
		src/push_swap/ft_parse.c \
		src/push_swap/solver_utils_ab.c \
		src/push_swap/solver_utils_ba.c \
		src/push_swap/ft_rotate_and_push.c \
		src/push_swap/operations.c \
		src/push_swap/operations_2.c \
		src/push_swap/operations_3.c \
		src/push_swap/ft_check_dup.c \
		src/push_swap/ft_check_sorted.c \
		src/push_swap/ft_error_print.c \
		src/push_swap/ft_free.c \
		src/push_swap/lst_utils.c \
		src/push_swap/lst_utils_2.c \
		src/push_swap/ft_parse_args_quoted.c \
		src/push_swap/ft_list_args.c \
		src/push_swap/ft_check_args.c \
		src/push_swap/ft_sort_big.c \
		src/push_swap/ft_sort_three.c \
		src/push_swap/ft_rotate_type.c \
		
BONUS_SRC = src/checker/checker.c \
			src/checker/checker_utils.c \
			

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_1} ${OBJ_2}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_1} ${OBJ_2} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_2} ${BONUS_OBJ} 
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_2} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

bonus: ${BONUS} 

clean:
	${RM} ${OBJ_1} ${OBJ_2} ${BONUS_OBJ} ${NAME} ${BONUS}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus
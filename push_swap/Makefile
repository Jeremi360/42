# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 13:48:18 by yogun             #+#    #+#              #
#    Updated: 2024/10/04 14:36:43 by jbiernac         ###   ########.fr        #
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

SRC_MAIN = src/push_swap/push_swap.c \

SRC_LIB =	src/push_swap/algorithm.c \
		src/push_swap/ft_add_back.c \
		src/push_swap/ft_stack_new.c \
		src/push_swap/ft_check_utils.c \
		src/push_swap/ft_parse.c \
		src/push_swap/solver_utils_ab.c \
		src/push_swap/solver_utils_ba.c \
		src/push_swap/ft_rotate_and_push.c \
		src/push_swap/operations.c \
		src/push_swap/operations_LIB.c \
		src/push_swap/operations_3.c \
		src/push_swap/ft_check_dup.c \
		src/push_swap/ft_check_sorted.c \
		src/push_swap/ft_error_print.c \
		src/push_swap/ft_free.c \
		src/push_swap/lst_utils.c \
		src/push_swap/lst_utils_LIB.c \
		src/push_swap/ft_parse_args_quoted.c \
		src/push_swap/ft_list_args.c \
		src/push_swap/ft_check_args.c \
		src/push_swap/ft_sort_big.c \
		src/push_swap/ft_sort_three.c \
		src/push_swap/ft_rotate_type.c \
		
BONUS_SRC = src/checker/checker.c \
			src/checker/checker_utils.c \
			

OBJ_MAIN = ${SRC_MAIN:.c=.o}
OBJ_LIB = ${SRC_LIB:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ_MAIN} ${OBJ_LIB}
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${OBJ_MAIN} ${OBJ_LIB} -o ${NAME} ${INCLUDE}

${BONUS}: ${OBJ_LIB} ${BONUS_OBJ} 
	make -C $(LIBFTDIR)
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ_LIB} -o ${BONUS} ${INCLUDE}

all: ${NAME} ${BONUS}

bonus: ${BONUS} 

clean:
	${RM} ${OBJ_MAIN} ${OBJ_LIB} ${BONUS_OBJ} ${NAME} ${BONUS}
	@cd $(LIBFTDIR) && $(MAKE) clean

fclean: clean
	${RM} ${NAME}
	@cd $(LIBFTDIR) && $(MAKE) fclean

re: clean all

.PHONY: all clean fclean re bonus
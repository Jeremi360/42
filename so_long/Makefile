CC = gcc
FLAGS = -g -Wall -Wextra -Werror
NAME = so_long
SRCS = main.c \
	mapstuff1.c \
	mapstuff2.c \
	start_end_util.c \
	utils1.c \
	utils2.c \
	ft_printf.c \
	ft_printf_utils.c \
	
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -Lmlx -lmlx -lXext -lX11 -lXrender -lm -lbsd -o $(NAME)

clean: 
	@rm $(OBJS)

fclean: 
	@rm $(NAME)
	@rm $(OBJS)

re:	fclean all

%.o: %.c
	gcc $(FLAGS) -I ./mlx -c $< -o $@

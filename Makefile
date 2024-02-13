# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 19:59:08 by psitkin           #+#    #+#              #
#    Updated: 2024/02/13 21:11:42 by psitkin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
LIBFT = ./libft_push_swap
CFLAGS = -Wall -Wextra -Werror
SRC = push_swap.c \
		swap.c \
		stack_utils.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		print.c \
		constructors.c \
		deconstructors.c \
		

OBJ = $(SRC:.c=.o)

all: $(LIBFT)/libft.a $(NAME)

$(NAME): $(OBJ)
	cc $(CFLAGS) -o $(NAME) $(OBJ) -L$(LIBFT) -lft

$(LIBFT)/libft.a:
		make -C $(LIBFT)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
	make clean -C $(LIBFT)
fclean: clean
		rm -f $(NAME)
		$(RM) $(LIBFT)/libft.a
re: fclean all

.PHONY: all clean fclean re
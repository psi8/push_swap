# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 19:59:08 by psitkin           #+#    #+#              #
#    Updated: 2024/01/28 20:01:58 by psitkin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c

OBJ = $(SRC:%.c=%.o)

FLAGS = -Wall -Wextra -Werror
INC = -I.

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) 
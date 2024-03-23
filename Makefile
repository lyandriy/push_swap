# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 17:36:01 by lyandriy          #+#    #+#              #
#    Updated: 2023/10/02 19:49:42 by lyandriy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = swap.c\
	  main.c\
	  push.c\
	  utils.c\
	  rotate.c\
	  stacks.c\
	  reverse.c\
	  push_swap.c\
	  utils_sort.c\
	  check_input.c\
	  sort_numbers.c

OBJ = $(SRC:.c=.o)

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
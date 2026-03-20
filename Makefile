# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/19 08:58:28 by csekakul          #+#    #+#              #
#    Updated: 2026/03/20 10:38:11 by csekakul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c parsing.c stack.c swap.c push.c rotate.c reverse_rotate.c sort_small.c utils.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@echo "Nothing to clean yet."

fclean: clean
	rm -f $(NAME)

re: fclean all

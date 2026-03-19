# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/19 08:58:28 by csekakul          #+#    #+#              #
#    Updated: 2026/03/19 13:50:47 by csekakul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP =		push_swap
CHECKER =		checker
NAME =			$(PUSH_SWAP) $(CHECKER)
LIBFT_A =		libftprintf.a

COMP =			gcc -Wall -Werror -Wextra -I includes -I libft/includes -I libft/libft -c -o

S_SRC =			do_pa.c \
				do_pb.c \
				do_ra.c \
				do_rb.c \
				do_rr.c \
				do_rra.c \
				do_rrb.c \
				do_rrr.c \
				do_sa.c \
				do_sb.c \
				do_ss.c \

all:

clean:

fclean:

re:				fclean all

.PHONY:			all clean fclean re

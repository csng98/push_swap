/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:58:24 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/19 13:41:08 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

// circular doubly-linked list

typedef struct s_stack
{
	long int		num;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

// typedef for stacks a + b

typedef struct s_frame
{
	struct s_stack	*a;
	struct s_stack	*b;

	char			**argv;
	char			*line;
	char			*str;

	int				print_stacks;
	int				do_write;
	int				stack_len;
	long			quarter;
	long			median;
	long			three_quarters;

	long			biggest;
	int				big_rotate;
	int				big_rrotate;
	int				big_flag;

	long			smallest;
	int				small_rotate;
	int				small_rrotate;
	int				small_flag;

	int				after_rotate;
}					t_frame;

#endif

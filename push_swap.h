/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:58:24 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/20 10:29:06 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	int		total;
}	t_stack;

size_t		ft_strlen(const char *s);
char		**ft_split(char const *s, char c);
long		ft_atoi(const char *str);
int			input_is_correct(char *str);
void		get_numbers(char *current_arg, t_stack **a);
void		error_exit(t_stack **a, t_stack **b, char **split);
int			is_duplicate(t_stack **stack);
void		stack_add_back(t_stack **stack, int n, char *param);
void		free_stack(t_stack **stack);
void		free_split(char **split);
void		sa(t_stack *s);
void		sb(t_stack *s);
void		ss(t_stack *s);
void		pa(t_stack *s);
void		pb(t_stack *s);
void		ra(t_stack *s);
void		rb(t_stack *s);
void		rr(t_stack *s);
void		rra(t_stack *s);
void		rrb(t_stack *s);
void		rrr(t_stack *s);
int			is_sorted(t_stack *s);
void		sort_two(t_stack *s);
void		sort_three(t_stack *s);
void		sort_small(t_stack *s);

#endif

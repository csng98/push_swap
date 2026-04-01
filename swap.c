/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 09:53:24 by csekakul          #+#    #+#             */
/*   Updated: 2026/04/01 09:51:48 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_a_internal(t_stack *s)
{
	int	tmp;

	if (!s || s->size_a < 2)
		return ;
	tmp = s->a[0];
	s->a[0] = s->a[1];
	s->a[1] = tmp;
}

static void	swap_b_internal(t_stack *s)
{
	int	tmp;

	if (!s || s->size_b < 2)
		return ;
	tmp = s->b[0];
	s->b[0] = s->b[1];
	s->b[1] = tmp;
}

void	sa(t_stack *s)
{
	swap_a_internal(s);
	write(1, "sa\n", 3);
	s->op_count++;
	s->sa_count++;
}

void	sb(t_stack *s)
{
	swap_b_internal(s);
	write(1, "sb\n", 3);
	s->op_count++;
	s->sb_count++;
}

void	ss(t_stack *s)
{
	swap_a_internal(s);
	swap_b_internal(s);
	write(1, "ss\n", 3);
	s->op_count++;
	s->ss_count++;
}

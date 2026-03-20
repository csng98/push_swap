/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:00:19 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/20 10:00:52 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_a_internal(t_stack *s)
{
	int	i;

	if (!s || s->size_b == 0)
		return ;
	s->a = realloc(s->a, sizeof(int) * (s->size_a + 1));
	i = s->size_a;
	while (i > 0)
	{
		s->a[i] = s->a[i - 1];
		i--;
	}
	s->a[0] = s->b[0];
	s->size_a++;
	i = 0;
	while (i < s->size_b - 1)
	{
		s->b[i] = s->b[i + 1];
		i++;
	}
	s->size_b--;
}

static void	push_b_internal(t_stack *s)
{
	int	i;

	if (!s || s->size_a == 0)
		return ;
	s->b = realloc(s->b, sizeof(int) * (s->size_b + 1));
	i = s->size_b;
	while (i > 0)
	{
		s->b[i] = s->b[i - 1];
		i--;
	}
	s->b[0] = s->a[0];
	s->size_b++;
	i = 0;
	while (i < s->size_a - 1)
	{
		s->a[i] = s->a[i + 1];
		i++;
	}
	s->size_a--;
}

void	pa(t_stack *s)
{
	push_a_internal(s);
	write(1, "pa\n", 3);
}

void	pb(t_stack *s)
{
	push_b_internal(s);
	write(1, "pb\n", 3);
}

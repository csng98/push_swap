/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:00:19 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/20 12:07:59 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_a_internal(t_stack *s)
{
	int	*new_array;
	int	i;

	if (!s || s->size_b == 0)
		return ;
	new_array = malloc(sizeof(int) * (s->size_a + 1));
	if (!new_array)
		error_exit(&s, NULL, NULL);
	i = 0;
	while (i < s->size_a)
	{
		new_array[i + 1] = s->a[i];
		i++;
	}
	new_array[0] = s->b[0];
	free(s->a);
	s->a = new_array;
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
	int	*new_array;
	int	i;

	if (!s || s->size_a == 0)
		return ;
	new_array = malloc(sizeof(int) * (s->size_b + 1));
	if (!new_array)
		error_exit(&s, NULL, NULL);
	i = 0;
	while (i < s->size_b)
	{
		new_array[i + 1] = s->b[i];
		i++;
	}
	new_array[0] = s->a[0];
	free(s->b);
	s->b = new_array;
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

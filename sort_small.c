/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 10:09:46 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/20 10:20:13 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *s)
{
	if (s->size_a < 2)
		return ;
	if (s->a[0] > s->a[1])
		sa(s);
}

void	sort_three(t_stack *s)
{
	int	a;
	int	b;
	int	c;

	a = s->a[0];
	b = s->a[1];
	c = s->a[2];
	if (a < b && b < c)
		return ;
	else if (a > b && a < c)
		sa(s);
	else if (a > b && b > c)
	{
		sa(s);
		rra(s);
	}
	else if (a > b && a > c)
		ra(s);
	else if (a < b && b > c && a < c)
	{
		sa(s);
		ra(s);
	}
	else if (a < b && b > c && a > c)
		rra(s);
}

void	sort_small(t_stack *s)
{
	if (is_sorted(s))
		return ;
	if (s->size_a == 2)
		sort_two(s);
	else if (s->size_a == 3)
		sort_three(s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 09:00:29 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/25 09:12:43 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

static int	is_flag(char *arg)
{
	return (!ft_strcmp(arg, "--simple")
		|| !ft_strcmp(arg, "--medium")
		|| !ft_strcmp(arg, "--complex")
		|| !ft_strcmp(arg, "--adaptive")
		|| !ft_strcmp(arg, "--bench"));
}

t_strategy	parse_strategy(int argc, char **argv, int *start)
{
	t_strategy	strategy;
	int			i;

	strategy = ADAPTIVE;
	i = 1;
	while (i < argc && is_flag(argv[i]))
	{
		if (!ft_strcmp(argv[i], "--simple"))
			strategy = SIMPLE;
		else if (!ft_strcmp(argv[i], "--medium"))
			strategy = MEDIUM;
		else if (!ft_strcmp(argv[i], "--complex"))
			strategy = COMPLEX;
		i++;
	}
	*start = i;
	return (strategy);
}

void	sort_stack(t_stack *a, t_stack *b, t_strategy strategy)
{
	(void)b;
	(void)strategy;

	if (a->size_a <= 3)
		sort_small(a);
	else if (a->size_a <= 5)
		sort_four_or_five(a);
}

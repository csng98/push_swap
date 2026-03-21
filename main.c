/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 08:43:22 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/21 16:18:20 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_strategy	strategy;
	int			i;

	if (argc < 2)
		return (0);
	a = NULL;
	b = NULL;
	strategy = parse_strategy(argc, argv, &i);
	while (i < argc)
	{
		get_numbers(argv[i], &a);
		i++;
	}
	if (!a || is_duplicate(&a))
		error_exit(&a, &b, NULL);
	sort_stack(a, b, strategy);
	free_stack(&a);
	free_stack(&b);
	return (0);
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

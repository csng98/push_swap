/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 08:43:22 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/20 10:21:38 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		i;

	if (argc < 2)
		return (0);
	i = 1;
	a = NULL;
	b = NULL;
	while (i < argc)
	{
		get_numbers(argv[i], &a);
		i++;
	}
	if (is_duplicate(&a))
		error_exit(&a, &b, NULL);
	if (a->size_a <= 3)
		sort_small(a);
	return (0);
}

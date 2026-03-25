/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 08:17:36 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/25 08:19:09 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive_sort(t_stack *s)
{
	double	d;

	d = compute_disorder(s);
	index_stack(s);

	if (d < 0.2)
		simple_sort(s);
	else if (d < 0.5)
		chunk_sort(s);
	else
		radix_sort(s);
}

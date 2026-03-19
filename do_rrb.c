/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:42:14 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/19 13:42:25 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rrb(t_frame *frame)
{
	if (frame->b)
		frame->b = frame->b->prev;
	if (frame->do_write)
		write(1, "rrb\n", 4);
}

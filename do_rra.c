/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 13:41:49 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/19 13:42:00 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_frame *frame)
{
	if (frame->a)
		frame->a = frame->a->prev;
	if (frame->do_write)
		write(1, "rra\n", 4);
}

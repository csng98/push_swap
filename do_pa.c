/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:19:25 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/19 11:19:35 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_pa(t_frame *frame)
{
	long int	tmp;

	if (frame->b)
	{
		tmp = frame->b->num;
		stack_del_top(frame, 'b');
		stack_add_top(frame, 'a', tmp);
	}
	if (frame->do_write)
		write(1, "pa\n", 3);
}

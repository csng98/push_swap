/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 08:43:58 by csekakul          #+#    #+#             */
/*   Updated: 2026/03/20 10:30:33 by csekakul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	input_is_correct(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	if ((str[i] == '+' || str[i] == '-') && (ft_strlen(str) > 1))
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

//parseo e inicializar stack
void	get_numbers(char *current_arg, t_stack **a)
{
	char	**param;
	long	n;
	int		i;

	i = 0;
	//param es el current arg pero parseado por el split
	param = ft_split(current_arg, ' ');
	if (!param)
		error_exit(a, NULL, NULL);
	while (param[i])
	{
		if (!input_is_correct(param[i]))
			error_exit(a, NULL, param);
		n = ft_atoi(param[i]);
		if (n > INT_MAX || n < INT_MIN)
			error_exit(a, NULL, param);
		stack_add_back(a, (int) n, *param);
		i++;
	}
	free_split(param);
}

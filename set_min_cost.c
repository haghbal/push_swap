/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_min_cost.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:23:27 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 15:39:00 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_min_cost(t_node *stack)
{
	long	cost_value;
	t_node	*min_cost_node;
	
	if (!stack)
		return ;
	min_cost_node = stack;
	cost_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cost_value)
		{
			cost_value = stack->push_cost;
			min_cost_node = stack;
		}
		stack = stack->next;
	}
	min_cost_node->min_cost = true;
}

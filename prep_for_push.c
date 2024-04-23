/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_for_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:26:15 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/23 18:30:21 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prep_for_push(t_node **stack, t_node *smallest_node, char stack_name)
{
	while(*stack != smallest_node)
	{
		if(stack_name == 'a')
		{
			if (smallest_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if(stack_name - 'b')
		{
			if(smallest_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	puts("moooooo");
	*stack = (*stack)->next;
	}
}
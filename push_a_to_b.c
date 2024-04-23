/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:27:51 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/23 18:34:54 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*get_smallest(t_node *stack)
{
	while (stack)
	{
		if (stack->min_cost)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	push_a_to_b(t_node **a, t_node **b)
{
	t_node	*smallest_node;
	
	smallest_node = get_smallest(*a);
	if (smallest_node->above_median && smallest_node->target_node->above_median)
		r_lesDeux(a, b);
	else if (!(smallest_node->above_median) && !(smallest_node->target_node->above_median))
		rr_lesDeux(a, b);
	prep_for_push(a, smallest_node, 'a');
	prep_for_push(b, smallest_node->target_node, 'b');
	pb(a, b);
	// print_stack(*a, 'C');
}

void	push_b_to_a(t_node **stack_a, t_node **stack_b)
{
	prep_for_push(stack_a, (*stack_b)->target_node, 'a');
	pa(stack_a, stack_b);
}
	
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:27:51 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 16:07:20 by haghbal          ###   ########.fr       */
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

void	prep_for_push(t_node **stack, t_node *top_node, char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	push_a_to_b(t_node **a, t_node **b)
{
	t_node	*smallest_node;
	t_node	*target_node;

	smallest_node = get_smallest(*a);
	target_node = smallest_node->target_node;
	while (*a != smallest_node && *b != target_node)
	{
		if (smallest_node->above_median && target_node->above_median)
			r_lesdeux(a, b);
		else if (!smallest_node->above_median && !target_node->above_median)
			rr_lesdeux(a, b);
		else
			break ;
	}
	prep_for_push(a, smallest_node, 'a');
	prep_for_push(b, target_node, 'b');
	pb(a, b);
}

void	push_b_to_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*target_node;
	t_node	*smallest_node;

	smallest_node = get_smallest(*stack_b);
	target_node = smallest_node->target_node;
	while (*stack_b != smallest_node && *stack_a != target_node)
	{
		if (smallest_node->above_median && target_node->above_median)
			r_lesdeux_b(stack_a, stack_b);
		else if (!smallest_node->above_median && !target_node->above_median)
			rr_lesdeux_b(stack_a, stack_b);
		else
			break ;
	}
	prep_for_push(stack_b, smallest_node, 'b');
	prep_for_push(stack_a, target_node, 'a');
	pa(stack_a, stack_b);
}

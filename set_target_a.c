/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:23:35 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/25 16:25:53 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_a(t_node *a, t_node *b)
{
	t_node	*target_node;
	t_node	*current_b;
	long	best_node;

	while (a)
	{
		best_node = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (current_b->data < a->data && current_b->data > best_node)
			{
				best_node = current_b->data;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_node == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

void	set_target_b(t_node *a, t_node *b)
{
	t_node	*target_node;
	t_node	*current_a;
	long	best_node;
	
	while (b)
	{
		best_node = LONG_MAX;
		current_a = a;
		while (current_a)
		{
			if (current_a->data > b->data && current_a->data < best_node)
			{
				best_node = current_a->data;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (best_node == LONG_MAX)
			b->target_node = find_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	min_on_top(t_node **stack)
{
	t_node	*min_node;

	min_node = find_min(*stack);
	while ((*stack)->data != min_node->data)
	{
		if (min_node->above_median)
			ra(stack);
		else
			rra(stack);
	}
}

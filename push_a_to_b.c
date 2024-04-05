/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:27:51 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/05 00:33:35 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	get_smallest(t_node *stack)
{
	while (stack)
	{
		if (stack->min_cost)
			return (stack);
		stack = stack->next;
	}
}

void	push_a_to_b(t_node *a, t_node *b)
{
	t_node	smallest_node;
	
	smallest_node = get_smallest(a);
	
	if (smallest_node->above_median && smallest_node->target_node->above_median)
		r_lesDeux(&a, &b);
	else if (!(smallest_node->above_median) && !(smallest_node->target_node->above_median))
		rr_lesDeux();
	a = a->next;
}
	
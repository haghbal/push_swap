/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:10:09 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 23:05:56 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_node *stack)
{
	int i;
	int median;

	i = 0;
	if (stack == NULL)
		return ;
	median = ft_dlstsize(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

int reduct_move(int a_index, int b_index)
{
    if (a_index > b_index)
        return (a_index);
    else
        return(b_index);
}

void	calcule_move(t_node *a, t_node *b)
{
    int	len_a;
	int	len_b;
	
	len_a = ft_dlstsize(a);
	len_b = ft_dlstsize(b);
    while (a)
    {
	    if (a->above_median && a->target_node->above_median)
            a->push_cost = reduct_move(a->index, a->target_node->index);
        else if (!(a->above_median) && !(a->target_node->above_median))
            a->push_cost = reduct_move(len_a - a->index, len_b - a->target_node->index);
        else if (a->above_median && !(a->target_node->above_median))
            a->push_cost = a->index + len_b - a->target_node->index;
        else if (!(a->above_median) && a->target_node->above_median)
            a->push_cost = len_a - a->index + a->target_node->index;
		a = a->next;
    }
}

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

void	init_nodes_a(t_node *a, t_node *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	calcule_move(a, b);
	set_min_cost(a);
}

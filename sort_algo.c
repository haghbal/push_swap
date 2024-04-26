/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:37:03 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 23:01:27 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algo(t_node **stack_a, t_node **stack_b)
{
    int	len_a;
	len_a = ft_dlstsize(*stack_a);
	if (len_a > 4){
		pb(stack_a, stack_b);
		pb(stack_a, stack_b);
		len_a -= 2;
	}
	else if (len_a > 3){
		pb(stack_a, stack_b);
		len_a--;
	}
	while (len_a-- > 3)
	{
		init_nodes_a(*stack_a, *stack_b);
		push_a_to_b(stack_a, stack_b);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		init_nodes_b(*stack_a, *stack_b);
		push_b_to_a(stack_a, stack_b);
	}
	current_index(*stack_a);
	min_on_top(stack_a);
}

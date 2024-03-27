/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:49:04 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/27 16:35:11 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_node **stack)
{
    t_node  *last;
    t_node  *head;
    t_node  *max;
    t_node  *min;

    last = ft_dlstlast(*stack);
	print_stack(last, 'X');
    head = *stack;
    max = find_max(*stack);
	print_stack(max, 'Y');
    min = find_min(*stack);
	print_stack(min, 'Z');
    if (last == max)
        sa(*stack);
    else if (last == min && head == max)
    {
        sa(*stack);
        rra(stack);
    }
    else if (last == min)
        rra(stack);
    else if (head == min && last != max)
    {
        sa(*stack);
        ra(stack);
    }
    else if (head == max && last != min)
        ra(stack);
}

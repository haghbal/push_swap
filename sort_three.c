/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:49:04 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/28 22:58:58 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node    *sort_three(t_node **stack)
{
    t_node  *last;
    t_node  *head;
    t_node  *max;
    t_node  *min;

    last = ft_dlstlast(*stack);
    head = *stack;
    max = find_max(*stack);
    min = find_min(*stack);

    if (last->data == max->data)
        sa(*stack);
    else if (last->data == min->data && head->data == max->data)
    {
        sa(*stack);
        rra(stack);
    }
    else if (last->data == min->data)
        rra(stack);
    else if (head->data == min->data && last->data != max->data)
    {
        sa(*stack);
        ra(stack);
    }
    else if (head->data == max->data && last->data != min->data)
        ra(stack);
    return (*stack);
}

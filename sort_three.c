/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:49:04 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/23 18:55:00 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_node **stack)
{
    print_stack(*stack, 'Y');
    t_node  *last;
    t_node  *max;
    t_node  *min;

    last = ft_dlstlast(*stack);
    max = find_max(*stack);
    min = find_min(*stack);
    printf(">>>>>>>>>>>>>%d\n", max->data);
    if (last->data == max->data)
    {
        sa(stack);
        print_stack(*stack, 'F');
    }
    else if (last->data == min->data && (*stack)->data == max->data)
    {
        sa(stack);
        rra(stack);
        print_stack(*stack, 'G');
    }
    else if (last->data == min->data)
    {
        rra(stack);
        print_stack(*stack, 'H');
    }
    else if ((*stack)->data == min->data && last->data != max->data)
    {
        sa(stack);
        ra(stack);
        print_stack(*stack, 'I');
    }
    else if ((*stack)->data == max->data && last->data != min->data)
        ra(stack);
    print_stack(*stack, 'J');
}

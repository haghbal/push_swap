/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:49:04 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/23 16:53:33 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sort_three(t_node *stack)
{
    t_node  *last;
    t_node  *head;
    t_node  *max;
    t_node  *min;

    last = ft_dlstlast(stack);
    head = stack;
    max = find_max(&stack);
    min = find_min(&stack);
    if (last == max)
        sa(&stack);
    else if (last == min && head == max)
    {
        sa(&stack);
        rra(&stack);
    }
    else if (last == min)
        rra(&stack);
    else if (head == min && last != max)
    {
        sa(&stack);
        ra(&stack);
    }
    else if (head ==max && last != min)
        ra(&stack);
}
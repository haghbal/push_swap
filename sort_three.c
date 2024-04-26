/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 14:49:04 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 22:55:10 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *find_max(t_node *stack)
{
    t_node  *max;
    t_node	*current;

	max = NULL;
    current = stack;
	if (current == NULL)
		return (NULL);
	max = current;
    while(current)
    {
        if (current->data > max->data)
            max = current;
        current = current->next;
    }
    return (max);
}


void    sort_three(t_node **stack)
{
    t_node  *max;

    max = find_max(*stack);
    if (*stack == max)
        ra(stack);
    else if ((*stack)->next == max)
        rra(stack);
    if ((*stack)->data > (*stack)->next->data)
        sa(stack);
}

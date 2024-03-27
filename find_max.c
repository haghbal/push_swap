/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:56:27 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/27 16:31:51 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *find_max(t_node *stack)
{
    t_node  *max;

    max = NULL;
    while(stack && stack->next != NULL)
    {
        if (max->data < stack->data)
            max->data = stack->data;
        stack = stack->next;
    }
    return (max);
}
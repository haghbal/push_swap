/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:56:27 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/23 16:51:54 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *find_max(t_node **stack)
{
    t_node  *max;

    max = NULL;
    while(*stack != NULL)
    {
        if (max == NULL)
            max = (*stack);
        else if (max < (*stack))
            max = (*stack);
        (*stack) = (*stack)->next;
    }
    return (max);
}
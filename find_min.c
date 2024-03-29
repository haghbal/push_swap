/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:00:41 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/27 16:34:41 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *find_min(t_node *stack)
{
    t_node  *min;

    min = NULL;
    while(stack && stack->next != NULL)
    {
        if (min->data > stack->data)
            min->data = stack->data;
        stack = stack->next;
    }
    return (min);
}
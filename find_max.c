/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:56:27 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/28 16:38:25 by haghbal          ###   ########.fr       */
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
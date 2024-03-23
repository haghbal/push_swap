/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revs_retate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:01:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/18 14:35:08 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int revs_retate(t_node **stack)
{
    t_node  *head;
    t_node *last;

    if (ft_dlstsize(*stack) < 2)
        return (-1) ;
    head = (*stack);
    last = ft_dlstlast(*stack);
    last->prev->next = NULL;
    last->prev = NULL;
    last->next = head;
    (*stack) = last;
    return (0);
}

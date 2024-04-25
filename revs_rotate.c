/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revs_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:01:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/25 20:06:48 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int revs_rotate(t_node **stack)
{
    t_node  *head;
    t_node *last;

    if (!stack || !*stack || !(*stack)->next)
        return (-1) ;
    head = (*stack);
    last = ft_dlstlast(*stack);
    last->prev->next = NULL;
    last->prev = NULL;
    last->next = head;
    head->prev = last;
    (*stack) = last;
    
    // if (!last->prev)
    // {
    //     printf("%d\n", last->data);
    //     // printf("%p\n", last->prev);
    // }
    // last->prev->next = NULL;
    // last->prev = NULL;
    // last->next = head;
    // (*stack) = last;
    return (0);
}

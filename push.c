/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:14:53 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/25 12:12:21 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_node **src, t_node **dest)
{
    t_node  *head;

    if (!(*src))
        return ;
    head = *src;
    (*src) = (*src)->next;
    head->next = NULL;
    ft_dlstadd_front(dest, head);
    if (*src)
        (*src)->prev = NULL;
}

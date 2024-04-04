/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcule_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:56:27 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/03 15:31:44 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calcule_move(t_node *a, t_node *b)
{
    int	len_a;
	int	len_b;
	
	len_a = ft_dlstsize(a);
	len_b = ft_dlstsize(b);
    while (a)
    {
	    if (a->above_median && a->target_node->above_median)
            a->push_cost = a->index + a->target_node->index;
        else if (a->above_median && !(a->target_node->above_median))
            a->push_cost = a->index + len_b - a->target_node->index;
        else if (!(a->above_median) && a->target_node->above_median)
            a->push_cost = len_a - a->index + a->target_node->index;
        else if (!(a->above_median) && !(a->target_node->above_median))
            a->push_cost = len_a - a->index + len_b - a->target_node->index;
		a = a->next;
    }
}
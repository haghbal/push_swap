/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calcule_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 20:56:27 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 14:12:02 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int reduct_move(int a_index, int b_index)
{
    if (a_index > b_index)
        return (a_index);
    else
        return(b_index);
}

void	calcule_move(t_node *a, t_node *b)
{
    int	len_a;
	int	len_b;
	
	len_a = ft_dlstsize(a);
	len_b = ft_dlstsize(b);
    while (a)
    {
	    if (a->above_median && a->target_node->above_median)
            a->push_cost = reduct_move(a->index, a->target_node->index);
        else if (!(a->above_median) && !(a->target_node->above_median))
            a->push_cost = reduct_move(len_a - a->index, len_b - a->target_node->index);
        else if (a->above_median && !(a->target_node->above_median))
            a->push_cost = a->index + len_b - a->target_node->index;
        else if (!(a->above_median) && a->target_node->above_median)
            a->push_cost = len_a - a->index + a->target_node->index;
		a = a->next;
    }
}
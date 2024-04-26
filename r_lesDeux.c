/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_lesDeux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:09:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 23:09:32 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    r_lesDeux(t_node **a, t_node **b)
{
    while((!(*a)->min_cost) && (*b) != (*a)->target_node)
        rr(a, b);
    current_index(*a);
    current_index(*b);
}
void	rr_lesDeux(t_node **a, t_node **b)
{
	while((!(*a)->min_cost) && (*b) != (*a)->target_node)
        rrr(a, b);
	current_index(*a);
    current_index(*b);
}

void    r_lesDeuxB(t_node **a, t_node **b)
{
    while((!(*b)->min_cost) && (*a) != (*b)->target_node)
        rr(a, b);
    current_index(*a);
    current_index(*b);
}

void	rr_lesDeuxB(t_node **a, t_node **b)
{
	while((!(*b)->min_cost) && (*a) != (*b)->target_node)
        rrr(a, b);
	current_index(*a);
    current_index(*b);
}

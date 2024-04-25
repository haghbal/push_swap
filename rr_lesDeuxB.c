/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_lesDeuxB.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:15:54 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/25 22:17:02 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_lesDeuxB(t_node **a, t_node **b)
{
	while((!(*b)->min_cost) && (*a) != (*b)->target_node)
        rrr(a, b);
	current_index(*a);
    current_index(*b);
}
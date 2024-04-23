/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_lesDeux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 00:28:11 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/23 15:06:22 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_lesDeux(t_node **a, t_node **b)
{
	while((!(*a)->min_cost) && (*b) != (*a)->target_node)
        rrr(a, b);
	current_index(*a);
    current_index(*b);
}
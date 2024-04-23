/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_lesDeux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:09:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/23 13:19:20 by haghbal          ###   ########.fr       */
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

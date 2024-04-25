/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_lesDeuxB.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:13:23 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/25 22:14:46 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    r_lesDeuxB(t_node **a, t_node **b)
{
    while((!(*b)->min_cost) && (*a) != (*b)->target_node)
        rr(a, b);
    current_index(*a);
    current_index(*b);
}
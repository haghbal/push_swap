/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_lesDeux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 00:09:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 13:38:00 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_lesdeux(t_node **a, t_node **b)
{
	while ((!(*a)->min_cost) && (*b) != (*a)->target_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}

void	rr_lesdeux(t_node **a, t_node **b)
{
	while ((!(*a)->min_cost) && (*b) != (*a)->target_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}

void	r_lesdeux_b(t_node **a, t_node **b)
{
	while ((!(*b)->min_cost) && (*a) != (*b)->target_node)
		rr(a, b);
	current_index(*a);
	current_index(*b);
}

void	rr_lesdeux_b(t_node **a, t_node **b)
{
	while ((!(*b)->min_cost) && (*a) != (*b)->target_node)
		rrr(a, b);
	current_index(*a);
	current_index(*b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 20:27:51 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/04 00:16:11 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a_to_b(t_node *a, t_node *b)
{
	while (a)
	{
		if (a->min_cost == true && a->above_median && a->target_node->above_median)
			r_lesDeux(a, b)
		else if (a->min->coste = true && !(a->above_median) && !(a->target_node->above_median))
			rr_lesDeux()
		a = a->next;
	}
} 
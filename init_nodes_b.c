/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_nodes_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:51:38 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 13:17:45 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_nodes_b(t_node *a, t_node *b)
{
	current_index(b);
	current_index(a);
	set_target_b(a, b);
	calcule_move(b, a);
	set_min_cost(b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_target_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:23:35 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/03 16:11:51 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_a(t_node *a, t_node *b)
{
    t_node	*target_node;
	t_node	*current_b;
	long	best_node;

	best_node = LONG_MIN;
	while (a)
    {
		current_b = b;
        while (current_b)
        {
            if (current_b->data < a->data && current_b->data > best_node)
			{
				best_node = current_b->data;
                target_node = current_b;
			}
			current_b = current_b->next;
        }
		if (best_node == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
    }
}
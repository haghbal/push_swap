/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:37:03 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/29 21:57:21 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *sort_algo(t_node **stack_a, t_node **stack_b)
{
    int	len_a;

	len_a = ft_dlstsize(*stack_a);
	if (len_a-- > 3)
		pb(stack_a, stack_b);
	if (len_a-- > 3)
		pb(stack_a, stack_b);
	while (len_a -- > 3)
	{
		
	}
	
}
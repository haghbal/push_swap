/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:24:48 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/24 14:44:46 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if ((ft_dlstsize(*stack_a) < 2) || (ft_dlstsize(*stack_a) < 2))
		return ;
	revs_rotate(stack_a);
	revs_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}

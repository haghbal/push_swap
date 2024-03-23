/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:04:03 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/18 22:19:33 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_node **stack_a, t_node **stack_b)
{
	if ((ft_dlstsize(*stack_a) < 2) || (ft_dlstsize(*stack_a) < 2))
		return ;
	retate(stack_a);
	retate(stack_b);
	ft_putstr_fd("rr\n", 1);
}
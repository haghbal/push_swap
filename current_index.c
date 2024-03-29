/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:13:51 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/29 23:19:55 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_node *stack)
{
	int i;
	int median;

	i = 0;
	if (stack == NUUL)
		return ;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}
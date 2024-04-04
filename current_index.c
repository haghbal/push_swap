/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   current_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:13:51 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/02 00:34:51 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	current_index(t_node *stack)
{
	int i;
	int median;

	i = 0;
	if (stack == NULL)
		return ;
	median = ft_dlstsize(stack) / 2;
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
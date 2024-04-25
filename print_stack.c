/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:29:24 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/24 17:04:46 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *stack, char c)
{
	printf("stack %c ----\n", c);
	while(stack)
	{
		printf("DATA:%d-INDX:%d-PC:%d-MC:%d-ABOV:%d\n", stack->data, stack->index, stack->push_cost,
		 stack->min_cost, stack->above_median);
		stack = stack->next;
	}
	puts("-------------------");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonctionDePrint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:29:24 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/27 15:34:00 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *stack, char c)
{
	printf("stack %c ----\n", c);
	while(stack)
	{
		printf("%d\n", stack->data);
		stack = stack->next;
	}
	puts("-------------------");
}

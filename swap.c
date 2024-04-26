/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:58:17 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 22:54:10 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int swap(t_node **stack)
{
    t_node	*head;
	t_node	*next;
	int		tmp_data;
	int		tmp_index;

	if (ft_dlstsize(*stack) < 2)
		return (-1);
	head = (*stack);
	next = head->next;
	tmp_data = head->data;
	tmp_index = head->index;
	head->data = next->data;
	head->index = next->index;
	next->data = tmp_data;
	next->index = tmp_index;
	return (0); 
}

void	sa(t_node **stack)
{
	if (swap(stack) == -1)
		return ;
	ft_putstr_fd("sa\n", 1);
	return ;
}

void	sb(t_node *stack)
{
	if (swap(&stack) == -1)
		return ;
	ft_putendl_fd("sb\n", 1);
	return ;
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr_fd("ss\n", 1);
}
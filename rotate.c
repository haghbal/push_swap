/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:40:22 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 22:57:23 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_node **stack)
{
	if (!(*stack) || !(*stack)->next)
		return (0);
	t_node	*head;
	t_node	*last;
	
	if (ft_dlstsize(*stack) < 2)
		return (-1);
	head = (*stack);
	(*stack) = (*stack)->next;
	last = ft_dlstlast(*stack);
	last->next = head;
	head->next = NULL;
	head->prev = last;
	(*stack)->prev = NULL;
	return (0);
}

void	ra(t_node **stack_a)
{
	if (rotate(stack_a) == -1)
		return ;
	ft_putstr_fd("ra\n", 1);	
}

void	rb(t_node **stack_b)
{
	if (rotate(stack_b) == -1)
		return ;
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	if ((ft_dlstsize(*stack_a) < 2) || (ft_dlstsize(*stack_a) < 2))
		return ;
	rotate(stack_a);
	rotate(stack_b);
	ft_putstr_fd("rr\n", 1);
}

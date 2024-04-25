/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:40:22 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/24 20:21:50 by haghbal          ###   ########.fr       */
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

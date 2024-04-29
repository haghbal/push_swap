/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:00:41 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 17:45:20 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_node *stack)
{
	t_node	*min;
	t_node	*current;

	min = NULL;
	current = stack;
	if (current == NULL)
		return (NULL);
	min = current;
	while (current)
	{
		if (current->data < min->data)
			min = current;
		current = current->next;
	}
	return (min);
}

t_node	*find_max(t_node *stack)
{
	t_node	*max;
	t_node	*current;

	max = NULL;
	current = stack;
	if (current == NULL)
		return (NULL);
	max = current;
	while (current)
	{
		if (current->data > max->data)
			max = current;
		current = current->next;
	}
	return (max);
}

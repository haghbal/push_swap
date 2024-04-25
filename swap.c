/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:58:17 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/24 11:16:23 by haghbal          ###   ########.fr       */
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
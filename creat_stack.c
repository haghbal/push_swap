/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:04:58 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/27 15:06:48 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *creat_stack(int *arr, int len)
{
	int i;
	t_node	*head;

    i = 0;
	head = NULL;
	while (i < len)
	{
		ft_dlstadd_back(&head, ft_dlstnew(&arr[i]));
		i++;
	}
	return (head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:45:46 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/12 11:54:01 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_dlstnew(int *content)
{
	t_node	*obj;

	obj = malloc(sizeof(t_node));
	if (obj == NULL)
		return (NULL);
	obj->data = *content;
	obj->next = NULL;
    obj->prev = NULL;
	return (obj);
}
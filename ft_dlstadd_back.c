/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:54:08 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/12 11:51:09 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstadd_back(t_node **lst, t_node *new)
{
	t_node	*fin;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst != NULL)
	{
		fin = ft_dlstlast(*lst);
		fin->next = new;
        new->prev = fin;
        new->next = NULL;
	}
	else
		*lst = new;
}
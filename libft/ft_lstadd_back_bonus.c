/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:22:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 16:01:14 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*fin;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst != NULL)
	{
		fin = ft_lstlast(*lst);
		fin->next = new;
	}
	else
		*lst = new;
}

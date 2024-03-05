/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:40:50 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 18:26:22 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	if (*lst)
	{
		tmp = *lst;
		while (tmp != NULL)
		{
			*lst = tmp->next;
			del(tmp->content);
			free(tmp);
			tmp = *lst;
		}
	}
}

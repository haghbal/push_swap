/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:54:08 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 17:44:59 by haghbal          ###   ########.fr       */
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
	{
		*lst = new;
		(*lst)->next = NULL;
		(*lst)->prev = NULL;
	}
}

void	ft_dlstadd_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		(*lst)->next = NULL;
	}
	else
	{
		(*lst)->prev = new;
		new->next = (*lst);
		(*lst) = new;
	}
}

t_node	*ft_dlstlast(t_node *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

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

int	ft_dlstsize(t_node *lst)
{
	int	i;

	if (lst == NULL)
		return (0);
	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:07:40 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/01 18:50:21 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		current = ft_lstnew(0);
		if (!current)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		current->content = f(lst->content);
		ft_lstadd_back(&new_list, current);
		lst = lst->next;
	}
	return (new_list);
}

// void *test(void *cont)
// {
//     return (cont);
// }
// void del(void *cont)
// {
//     free(cont);
// }
// int main()
// {
//     t_list *head = ft_lstnew(ft_strdup("test"));
//     ft_lstadd_back(&head, ft_lstnew(ft_strdup("test29")));
//     t_list *new = ft_lstmap(head, test, del);
//     printf("%s\n", new->content);
//     printf("%s", new->next->content);
// }
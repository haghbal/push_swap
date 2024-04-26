/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revs_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:01:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 23:00:14 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int revs_rotate(t_node **stack)
{
    t_node  *head;
    t_node *last;

    if (!stack || !*stack || !(*stack)->next)
        return (-1) ;
    head = (*stack);
    last = ft_dlstlast(*stack);
    last->prev->next = NULL;
    last->prev = NULL;
    last->next = head;
    head->prev = last;
    (*stack) = last;
    
    // if (!last->prev)
    // {
    //     printf("%d\n", last->data);
    //     // printf("%p\n", last->prev);
    // }
    // last->prev->next = NULL;
    // last->prev = NULL;
    // last->next = head;
    // (*stack) = last;
    return (0);
}
void	rra(t_node **stack_a)
{
	if (revs_rotate(stack_a) == -1)
		return ;
	ft_putstr_fd("rra\n", 1);
}
void	rrb(t_node **stack_b)
{
	if (revs_rotate(stack_b) == -1)
		return ;
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	if ((ft_dlstsize(*stack_a) < 2) || (ft_dlstsize(*stack_a) < 2))
		return ;
	revs_rotate(stack_a);
	revs_rotate(stack_b);
	ft_putstr_fd("rrr\n", 1);
}
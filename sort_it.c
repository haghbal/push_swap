/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_it.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:07:01 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/28 22:55:23 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*sort_it(t_node *a, int len)
{
    if (len == 2)
    {
        sa(a);
    }
    else if (len == 3)
        a = sort_three(&a);
    return (a);
}

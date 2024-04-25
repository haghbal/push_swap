/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/25 22:06:43 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int len;
	t_node	*stack_a;
	t_node	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	if (ac > 1)
	{
		stack_a = stack_init(av);
		// print_stack(stack_a, 'A');
		len = ft_dlstsize(stack_a);
		// printf ("size : %d\n", len);
		if (len == 2)
			sa(&stack_a);
    	else if (len == 3)
        	sort_three(&stack_a);
    	else if (len > 3)
       		sort_algo(&stack_a, &stack_b);
		print_stack(stack_a, 'A');
	}
    return (0);
}

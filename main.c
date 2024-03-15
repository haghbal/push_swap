/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/15 15:33:14 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include <stdio.h>

void	print_stack(t_node *stack, char c){
	printf("stack %c ----\n", c);
	while(stack){
		printf("%d\n", stack->data);
		stack = stack->next;
	}
	puts("-------------------");
}

int main(int ac, char **av)
{
	int i;
	char *num;
	int *arr;
	char **split_num;
	t_node	*stack_a;
	t_node *	stack_b;
	
	stack_b = NULL;
	i = 1;
	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
		puts("heerrr");
	if (ac > 1)
	{
		num = join_arg(av, count_len(av));
		split_num = ft_split(num, ' ');
		if (syntax_error(split_num))
			return (write(2, "syntax error", 12));
		i = 0;
		arr = conv_to_nbr(split_num, count_len(av), &i);
		check_double_and_sort(arr, i);
		stack_a = creat_stack(arr, i);
		sort_it(stack_a, stack_b, i);
		print_stack(stack_a, 'A');
		// print_stack(stack_b, 'B');
	}
    return (0);
}

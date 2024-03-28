/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/28 22:55:09 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"
#include <stdio.h>

int main(int ac, char **av)
{
	int		i;
	char	*num;
	int		*arr;
	char	**split_num;
	t_node	*stack_a;
	t_node	*stack_b;
	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (ac == 1 || (ac == 2 && av[1][0] == '\0'))
		return (1);
	if (ac > 1)
	{
		num = join_arg(av, count_len(av));
		split_num = ft_split(num, ' ');
		if (syntax_error(split_num))
			return (write(2, "syntax error", 12));
		i = 0;
		arr = conv_to_nbr(split_num, count_len(av), &i);
		if (check_double_and_sort(arr, i))
		{
			free(arr);
			exit(1);
		}
		stack_a = creat_stack(arr, i);
		print_stack(stack_a, 'A');
		stack_a = sort_it(stack_a, i);
		printf ("size : %d\n", ft_dlstsize(stack_a));
		print_stack(stack_a, 'A');
	}
    return (0);
}

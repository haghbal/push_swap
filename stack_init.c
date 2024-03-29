/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:47:26 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/29 15:35:27 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *stack_init(char **arr)
{
    int		i;
    char	*num;
	int		*int_arr;
	char	**split_num;
	t_node	*stack_a;
    
    num = join_arg(arr, count_len(arr));
    split_num = ft_split(num, ' ');
    if (syntax_error(split_num))
	{
    	write(2, "syntax error", 12);
		exit(1);
	}
    i = 0;
    int_arr = conv_to_nbr(split_num, count_len(arr), &i);
    if (check_double_and_sort(int_arr, i))
    {
    	free(int_arr);
    	exit(1);
    }
	stack_a = creat_stack(int_arr, i);
    return (stack_a);
}

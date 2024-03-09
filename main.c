/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/09 13:47:39 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int main(int ac, char **av)
{
	int i;
	char *num;
	int *arr2;
	char **split_num;
	
	i = 1;
	if (ac > 1)
	{
		num = join_arg(av, count_len(av));
		split_num = ft_split(num, ' ');
		if (syntax_error(split_num))
			return (write(2, "syntax error", 12));
		i = 0;
		arr2 = conv_to_nbr(split_num, count_len(av), &i);
		if (check_double(arr2, i))
			return (write(2, "error !\ndouble number\n", 23));
	
	}
    return (0);
}

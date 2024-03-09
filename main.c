/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/09 12:47:57 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int	count_len(char **av)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (av[i])
	{
		count += ft_strlen(av[i]);
		count++;
		i++;
	}
	return (count);
}

int	*conv_to_nbr(char **str, int count, int *i)
{
	int *arr;

	arr = malloc(count * sizeof(int));
	while (str[*i])
	{
		arr[*i] = ft_atoi(str[*i]);
		(*i)++;
	}
	return (arr);
}

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

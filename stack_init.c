/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:47:26 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 12:58:59 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	syntax_error(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (check_arg(arr[i]))
			return (1);
		i++;
	}
	return (0);
}

// int	check_double_and_sort(int *nbr, int len)
// {
// 	int		i;
// 	int		j;
// 	bool	flag;	

// 	i = 0;
// 	flag = false;
// 	while (i < len - 1)
// 	{
// 		j = i + 1;
// 		while (j < len)
// 		{
// 			if (nbr[i] == nbr[j])
// 				return (1);
// 			if (nbr[i] > nbr[j])
// 				flag = true;
// 			j++;
// 		}
// 		i++;
// 	}
// 	if (flag == false)
// 		return (1);
// 	return (0);
// }

int	check_double_and_sort(int *nbr, int len)
{
	int	i;
	int j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		if(nbr[i] > nbr[j])
		return (0);
		i++;
	}
	return (1);
}

t_node	*creat_stack(int *arr, int len)
{
	int		i;
	t_node	*head;

	i = 0;
	head = NULL;
	while (i < len)
	{
		ft_dlstadd_back(&head, ft_dlstnew(&arr[i]));
		i++;
	}
	return (head);
}

void	free_function(int *arr)
{
	free(arr);
	exit(1);
}

// void	free_function(int *arr)
// {
// 	free(arr);
// 	write(2, "Error\n", 6);
// 	exit(1);
// }

t_node	*stack_init(char **arr)
{
	int		len;
	char	*num;
	int		*int_arr;
	char	**split_num;
	t_node	*stack_a;

	num = join_arg(arr, count_len(arr));
	split_num = ft_split(num, ' ');
	free(num);
	if (syntax_error(split_num))
	{
		free_arr(split_num);
		write(2, "Error\n", 6);
		exit(1);
	}
	len = 0;
	int_arr = conv_to_nbr(split_num, count_len(arr), &len);
	free_arr(split_num);
	if (check_double_and_sort(int_arr, len))
		free_function(int_arr);
	stack_a = creat_stack(int_arr, len);
	return (stack_a);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 14:47:26 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/27 18:22:46 by haghbal          ###   ########.fr       */
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

int	*conv_to_nbr(char **str, int count, int *i)
{
	int *arr;
	long	nbr;

	arr = malloc(count * sizeof(int));
	if (arr == NULL)
		exit(1);
	while (str[*i])
	{
		nbr = ft_atol(str[*i]);
		if (nbr == 2147483648)
		{
			free(arr);
			exit(1);
		}
			
		arr[*i] = nbr;
		(*i)++;
	}
	return (arr);
}
int	check_double_and_sort(int *nbr, int len)
{
	int 	i;
	int 	j;
	bool	flag;

	i = 0;
	flag = false;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (nbr[i] == nbr[j])
				return (1);
			if (nbr[i] > nbr[j])
				flag = true;
			j++;
		}
		i++;
	}
	if (flag == false)
		return(1);
	return (0);
}

t_node  *creat_stack(int *arr, int len)
{
	int i;
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

t_node  *stack_init(char **arr)
{
    int		i;
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
    	write(2, "syntax error", 12);
		exit(1);
	}
    i = 0;
    int_arr = conv_to_nbr(split_num, count_len(arr), &i);
	free_arr(split_num);
    if (check_double_and_sort(int_arr, i))
    {
    	free(int_arr);
    	exit(1);
    }
	stack_a = creat_stack(int_arr, i);
    return (stack_a);
}

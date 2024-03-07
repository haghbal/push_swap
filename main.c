/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/07 12:56:17 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"


int	check_arg(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (i == 0 && (str[i] == '-'  || str[i] == '+') && (str[i + 1] != ' '))
			i++;
		while(str[i] == ' ')
			i++;
		if ((str[i] == '-' || str[i] == '+') && str[i-1] == ' ')
			i++;
		if (!ft_isdigit(str[i]) && str[i] == ' ')
			return (1);
		else
			i++;
	}
	return (0);
}

int	syntax_error(char **arr)
{
	int	i;

	i = 1;
	while (arr[i])
	{
		if (check_arg(arr[i]))
			return (1);
		i++;
	}
	return (0);
}

int check_numbers(int *nbr, int len)
{
	int i;
	int j;
	
	i = 0;
	// s_nbr = malloc(len * sizeof (int));
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (nbr[i] == nbr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	int i;
	int j;
	int k;
	int count;
	char *num;
	int *arr2;
	char **split_num;
	int count2;
	
	i = 1;
	k = 0;
	count = 0;
	count2 = 0;
	if (ac > 1)
	{
		if (syntax_error(av))
			return (write(2, "syntax error", 12));
		while (av[i])
		{
			count += ft_strlen(av[i]);
			count++;
			i++;
		}
		i = 0;
		num = malloc(count * sizeof(char));
		arr2 = malloc(count2 + 1 * sizeof(int));
		i = 1;
		while(av[i])
		{
			j = 0;
			while(av[i][j])
			{
				num[k] = av[i][j];
				j++;
				k++;
			}
			if (1 + i != ac)
				num[k]= ' ';
			k++;
			i++;
		}
		split_num = ft_split(num, ' ');
		i = 0;
		while (split_num[i])
		{
			arr2[i] = ft_atoi(split_num[i]);
			i++;
		}
		arr2[i] = 0;
		count2 = i;
		if (check_numbers(arr2, count2))
			return (write(2, "error !\ndouble number\n", 23));
		printf(" >>%d\n", count2);
		i = 0;
		while (i < count2)
		{
			printf("%d \n", arr2[i]);
			i++;
		}	
	}
    return (0);
}
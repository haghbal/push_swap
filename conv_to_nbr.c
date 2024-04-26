/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_to_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:44:21 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 19:22:29 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*conv_to_nbr(char **str, int count, int *i)
{
	int *arr;
	long	nbr;

	arr = malloc(count * sizeof(int));
	if (arr == NULL)
		exit(1);
	while (str[*i])
	{
		nbr = ft_atoi(str[*i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
		{
			write(1, "eroor max", 9);
			exit(1);
		}
		arr[*i] = nbr;
		(*i)++;
	}
	return (arr);
}
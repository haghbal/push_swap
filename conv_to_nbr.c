/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_to_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:44:21 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/09 13:44:46 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
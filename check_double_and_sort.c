/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_and_sort.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:37:59 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 13:00:11 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_double_and_sort(int *nbr, int len)
{
	int		i;
	int		j;
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
		return (1);
	return (0);
}

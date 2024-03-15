/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double_and_sort.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:37:59 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/11 11:31:37 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_double_and_sort(int *nbr, int len)
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
				exit(write(2, "error !\ndouble number\n", 22));
			if (nbr[i] > nbr[j])
				flag = true;
			j++;
		}
		i++;
	}
	if (flag == false)
		exit(write(2, "error !\nsorted\n", 16));
}

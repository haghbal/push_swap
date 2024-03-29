/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:42:03 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/29 15:33:45 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_len(char **arr)
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (arr[i])
	{
		count += ft_strlen(arr[i]);
		count++;
		i++;
	}
	return (count);
}
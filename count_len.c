/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 13:42:03 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/09 13:48:12 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:08:36 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/27 20:41:36 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	int				i;
	long	r;
	int				s;
	char			*str2;

	i = 0;
	r = 0;
	s = 1;
	str2 = (char *)str;
	while (str2[i] == ' ' || (str2[i] >= 9 && str2[i] <= 13))
	{
		i++;
	}
	if (str2[i] == '-')
		s *= -1;
	if (str2[i] == '-' || str2[i] == '+')
		i++;
	while (str2[i] >= '0' && str2[i] <= '9')
	{
		r = r * 10 + (str2[i] - 48);
		if ((s > 0 && r - INT_MAX > 0) || r * s + 2147483648 < 0)
		{
			write(1, "Error\n", 6);
			return (2147483648);
		}
		i++;
	}
	return (r * s);
}
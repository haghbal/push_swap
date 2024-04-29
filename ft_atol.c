/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:08:36 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/29 13:06:35 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	int		i;
	long	r;
	int		s;
	char	*str2;

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
			return (2147483648);
		i++;
	}
	return (r * s);
}

int	*conv_to_nbr(char **str, int count, int *i)
{
	int		*arr;
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
			write(1, "Error\n", 6);
			exit(1);
		}
		arr[*i] = nbr;
		(*i)++;
	}
	return (arr);
}

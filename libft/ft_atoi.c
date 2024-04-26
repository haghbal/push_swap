/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:41:36 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 19:23:41 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	check_nbr(long r, int s)
{
	if (r > 9223372036854775807 && s == 1)
		return (-1);
	if (r > 9223372036854775807 && s == -1)
		return (0);
	return ((r * s));
}

long	ft_atoi(const char *str)
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
			write(1, "error: buffer overflow detected\n", 32);
			exit(1);
		}
		i++;
	}
	return (check_nbr(r, s));
}

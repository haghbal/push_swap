/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:42:20 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/09 10:42:41 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (i == 0 && (str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i+1]))
			return (1);
		if ((str[i] == '-' || str[i] == '+') && !ft_isdigit(str[i+1]))
			return (1);
		if (ft_isdigit(str[i]) && (str[i+1] == '-'|| str[i+1] == '+'))
			return (1);
		if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (1);
		i++;
	}
	return (0);
}
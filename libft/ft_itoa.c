/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:00:29 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/09 18:25:36 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_dij(int dij)
{
	int	count;

	count = 0;
	if (dij == 0)
		return (1);
	if (dij < 0)
	{
		dij = -dij;
		count++;
	}
	while (dij != 0)
	{
		dij = dij / 10;
		count++;
	}
	return (count);
}

static void	ft_putnbr(char *str, int i, int nbr)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	if (nb < 10)
		str[i] = nb + 48;
	if (nb > 9)
	{
		ft_putnbr(str, i, nb % 10);
		ft_putnbr(str, (i - 1), nb / 10);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		dij;	

	dij = count_dij(n);
	str = malloc((dij + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_putnbr(str, (dij -1), n);
	str[dij] = '\0';
	return (str);
}

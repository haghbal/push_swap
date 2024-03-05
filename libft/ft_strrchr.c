/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:34:37 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 16:24:25 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;
	char	b;
	char	*j;

	i = 0;
	a = (char *)s;
	b = (char)c;
	j = NULL;
	while (a[i])
	{
		if (a[i] == b)
		{
			j = &a[i];
		}
		i++;
	}
	if (a[i] == b)
		return (&a[i]);
	return (j);
}

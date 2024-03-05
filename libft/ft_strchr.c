/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:37:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 16:28:03 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;
	char	b;

	i = 0;
	a = (char *)s;
	b = (char)c;
	while (a[i])
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	if (b == '\0')
		return (&a[i]);
	return (0);
}

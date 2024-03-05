/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:29:33 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 15:11:02 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = len;
	if (d > s)
	{
		while (i > 0)
		{
			d[i -1] = s[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}

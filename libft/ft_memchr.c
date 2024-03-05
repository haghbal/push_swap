/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:24 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 15:07:58 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cr;

	str = (unsigned char *)s;
	cr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

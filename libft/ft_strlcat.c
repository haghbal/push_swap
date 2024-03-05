/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:08:07 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 21:16:52 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen((char *)src);
	if (!dst && dstsize == 0)
		return (lensrc);
	lendst = ft_strlen(dst);
	j = lendst;
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	while (src[i] && i < dstsize - lendst - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (lensrc + j);
}

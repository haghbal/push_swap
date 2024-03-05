/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:52:04 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 21:17:27 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	new_str = (char *)haystack;
	if (*needle == '\0')
	{
		return (new_str);
	}
	if (haystack == NULL && len == 0)
		return (NULL);
	i = 0;
	while (new_str[i] && (i < len))
	{
		j = 0;
		while (new_str[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return (&new_str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

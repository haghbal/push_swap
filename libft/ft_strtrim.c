/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:48:09 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/10 23:11:46 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	return (i);
}

static char	*get_str(const char *s1, const char *set)
{
	size_t	end;
	size_t	start;
	char	*str;
	size_t	i;

	end = get_end(s1, set) + 1;
	start = get_start(s1, set);
	str = malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*set == '\0' || *s1 == '\0')
		return (ft_strdup(s1));
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start > end)
		return (ft_strdup(""));
	else
		str = get_str(s1, set);
	return (str);
}

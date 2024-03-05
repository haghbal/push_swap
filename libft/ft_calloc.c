/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:45:21 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/08 17:05:45 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*my_memory;
	size_t	prod;

	if ((int)count < 0 || (int)size < 0)
		return (0);
	prod = count * size;
	my_memory = malloc(prod * (sizeof(char)));
	if (!my_memory)
		return (0);
	ft_bzero(my_memory, prod);
	return (my_memory);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:21:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/09 11:44:19 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdlib.h>
# include <unistd.h>
#include "libft/libft.h"

int	check_double(int *nbr, int len);
int	syntax_error(char **arr);
int	check_arg(char *str);
char	*join_arg(char **arr, int len);

#endif
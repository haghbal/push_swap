/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:31:46 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/11 11:39:51 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    *join_arg(char **arr, int len)
{
    char    *str;
    int i;
    int j;
    int k;

    i = 1;
    j = 0;
    k = 0;
    
    str = malloc((len +1) * sizeof (char));
    if (str == NULL)
        exit(1);
    while (arr[i])
    {
        j = 0;
        while (arr[i][j])
        {
            str[k] = arr[i][j];
            j++;
            k++;
        }
        str[k] = ' ';
        k++;
        i++;
    }
    str[k] = '\0';
    return (str);
}

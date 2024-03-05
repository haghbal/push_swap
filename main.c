/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:04:00 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/05 10:01:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "push_swap.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;
    int count;
    char *num;

    i = 1;
    k = 0;
    count = 0;
    while (argv[i])
    {
        count += ft_strlen(argv[i]);
        count++;
        i++;
    }
    // printf("count : %d", count);
    num = malloc(count * sizeof(char));
    i = 1;
    while(argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            num[k] = argv[i][j];
            j++;
            k++;
        }
        if (1 + i != argc)
            num[k]= ' ';
        k++;
        i++;
    }
    printf("%s", num);
    return (0);
}
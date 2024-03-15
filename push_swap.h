/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:21:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/15 15:43:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
#include "libft/libft.h"

void    check_double_and_sort(int *nbr, int len);
int	syntax_error(char **arr);
int	check_arg(char *str);
int	count_len(char **av);
int *conv_to_nbr(char **str, int count, int *i);
char	*join_arg(char **arr, int len);

typedef struct s_node{
    int data;
    struct s_node *prev;
    struct s_node *next;
} t_node;

t_node 	*creat_stack(int *arr, int len);
t_node	*ft_dlstlast(t_node *lst);
t_node	*ft_dlstnew(int *content);
void	ft_dlstadd_back(t_node **lst, t_node *new);
void	ft_dlstadd_front(t_node **lst, t_node *new);
void	sort_it(t_node a, t_node b, int len);
void	sa_mov(t_node a);

void	(t_node a);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:21:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/03/29 15:42:01 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
#include <stdio.h>
#include "libft/libft.h"

int		check_double_and_sort(int *nbr, int len);
int		syntax_error(char **arr);
int		check_arg(char *str);
int		count_len(char **arr);
int		*conv_to_nbr(char **str, int count, int *i);
char	*join_arg(char **arr, int len);

typedef struct s_node{
    int data;
    int index;
    struct s_node *prev;
    struct s_node *next;
} t_node;

t_node	*stack_init(char **arr);
t_node	*creat_stack(int *arr, int len);
t_node	*ft_dlstlast(t_node *lst);
t_node	*ft_dlstnew(int *content);
void	ft_dlstadd_back(t_node **lst, t_node *new);
void	ft_dlstadd_front(t_node **lst, t_node *new);
int		ft_dlstsize(t_node *lst);

int		swap(t_node **stack);
void	sa(t_node *stack);
void	sb(t_node *stack);
void	ss(t_node **stack_a, t_node **stack_b);
int		retate(t_node **stack);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
int		revs_retate(t_node **stack);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
void	push(t_node **src, t_node **dest);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

t_node	*sort_three(t_node **stack);
t_node	*find_max(t_node *stack);
t_node	*find_min(t_node *stack);
t_node	*sort_algo(t_node **stack_a, t_node **stack_b);






void	print_stack(t_node *stack, char c);


#endif
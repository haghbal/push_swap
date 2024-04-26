/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:21:28 by haghbal           #+#    #+#             */
/*   Updated: 2024/04/26 22:41:41 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
#include <stdio.h>
#include <limits.h>
#include "libft/libft.h"


typedef struct s_node{
    int data;
    int index;
    int	push_cost;
    bool	above_median;
    bool	min_cost;
    struct s_node *target_node;
    struct s_node *prev;
    struct s_node *next;
} t_node;

int		check_double_and_sort(int *nbr, int len);
int		syntax_error(char **arr);
int		check_arg(char *str);
int		count_len(char **arr);
int		*conv_to_nbr(char **str, int count, int *i);
char	*join_arg(char **arr, int len);

t_node	*stack_init(char **arr);
t_node	*creat_stack(int *arr, int len);
t_node	*ft_dlstlast(t_node *lst);
t_node	*ft_dlstnew(int *content);
void	ft_dlstadd_back(t_node **lst, t_node *new);
void	ft_dlstadd_front(t_node **lst, t_node *new);
int		ft_dlstsize(t_node *lst);

int		swap(t_node **stack);
void	sa(t_node **stack);
void	sb(t_node *stack);
void	ss(t_node **stack_a, t_node **stack_b);

int		rotate(t_node **stack);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);

int		revs_rotate(t_node **stack);
void	rra(t_node **stack_a);
void	rrb(t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);

void	push(t_node **src, t_node **dest);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);

void	sort_three(t_node **stack);
t_node	*find_max(t_node *stack);
t_node	*find_min(t_node *stack);

void	sort_algo(t_node **stack_a, t_node **stack_b);
void	init_nodes_a(t_node *a, t_node *b);
void	current_index(t_node *stack);
void	set_target_a(t_node *a, t_node *b);
void	calcule_move(t_node *a, t_node *b);
void	set_min_cost(t_node *stack);

void	init_nodes_b(t_node *a, t_node *b);
void	push_a_to_b(t_node **a, t_node **b);
void	set_target_b(t_node *a, t_node *b);
void    r_lesDeux(t_node **a, t_node **b);
void	rr_lesDeux(t_node **a, t_node **b);
void	prep_for_push(t_node **stack, t_node *smallest_node, char stack_name);

void	push_b_to_a(t_node **stack_a, t_node **stack_b);
void	min_on_top(t_node **stack);

void	rr_lesDeuxB(t_node **a, t_node **b);
void    r_lesDeuxB(t_node **a, t_node **b);



void	print_stack(t_node *stack, char c);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:20 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/10 22:22:29 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	int				num;
	int				num_simplify;
	struct s_list	*next;
}					t_list;

void		ft_error(void);
t_list		*ft_new_nodo(int num);
t_list		*ft_lstlast(t_list *lst);
int			ft_count_num(t_list *stack);
int			main(int argc, char **argv);
int			ft_check_order(t_list *stack);
void		ft_sort_two(t_list **stack_a);
void		ft_sort_stack(t_list **stack);
void		ft_push_swap(t_list **stack_a);
int			ft_check_input(const char *str);
void		ft_sort_three(t_list **stack_a);
void		simplify_numbers(t_list **stack);
int			ft_bits_count(int biggest_number);
void		ft_execution_swap(t_list **stack);
int			ft_biggest_number(t_list *stack_a);
long int	ft_atoi(const char *str, int *pos);
void		ft_execution_rotate(t_list **stack);
int			ft_find_smallest_num(t_list *stack);
t_list		*ft_create_stack_a(const char *str);
void		ft_execution_reverse(t_list **stack);
t_list		*ft_check_duplicate(t_list *stack_a);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_sort_five(t_list **stack_a, int size_stack);
void		ft_move_smallest_number(t_list **stack, int pos);
void		ft_swap_stack(t_list **stack_a, t_list **stack_b);
void		ft_rotate_stack(t_list **stack_a, t_list **stack_b);
void		ft_reverse_rotate(t_list **stack_a, t_list **stack_b);
void		ft_push_stack(t_list **stack_on, t_list **stack_in, char whatstack);
void		radix_sort(t_list **stack_a, t_list **stack_b, int b_sz, int f_bit);

#endif
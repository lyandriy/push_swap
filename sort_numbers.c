/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:53:29 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/07 16:26:44 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_two(t_list **stack_a)
{
	if (stack_a[0]->num_simplify > stack_a[0]->next->num_simplify)
		ft_rotate_stack(stack_a, NULL);
}

void	ft_sort_three(t_list **stack_a)
{
	int	one;
	int	two;
	int	three;

	one = stack_a[0]->num_simplify;
	two = stack_a[0]->next->num_simplify;
	three = stack_a[0]->next->next->num_simplify;
	if (one > two && two < three && one < three)
		ft_swap_stack(stack_a, NULL);
	if (one > two && two < three && three < one)
		ft_rotate_stack(stack_a, NULL);
	if (one < two && two > three && three < one)
		ft_reverse_rotate(stack_a, NULL);
	if (one > two && two > three && three < one)
	{
		ft_swap_stack(stack_a, NULL);
		ft_reverse_rotate(stack_a, NULL);
	}
	if (one < two && two > three && three > one)
	{
		ft_swap_stack(stack_a, NULL);
		ft_rotate_stack(stack_a, NULL);
	}
}

void	ft_sort_five(t_list **stack_a, int size_stack)
{
	int		count;
	t_list	*stack_b;

	count = 0;
	if (size_stack == 5)
	{
		while (count != 2)
		{
			ft_move_smallest_number(stack_a, ft_find_smallest_num(stack_a[0]));
			ft_push_stack(stack_a, &stack_b, 'b');
			count++;
		}
		ft_sort_three(stack_a);
		ft_push_stack(&stack_b, stack_a, 'a');
		ft_push_stack(&stack_b, stack_a, 'a');
	}
	else
	{
		ft_move_smallest_number(stack_a, ft_find_smallest_num(stack_a[0]));
		ft_push_stack(stack_a, &stack_b, 'b');
		ft_sort_two(stack_a);
		ft_push_stack(&stack_b, stack_a, 'a');
	}
}

void	ft_sort_stack(t_list **stack_a)
{
	int		b_sz;
	int		f_bit;
	t_list	*stack_b;

	f_bit = 0;
	b_sz = ft_bits_count(ft_biggest_number(stack_a[0]));
	radix_sort(stack_a, &stack_b, b_sz, f_bit);
}

int	ft_check_order(t_list *stack)
{
	while (stack->next != NULL)
	{
		if (stack->num > stack->next->num)
			return (0);
		stack = stack->next;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:24:21 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/07 16:26:52 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_smallest_number(t_list **stack, int pos)
{
	int		size_stack;

	size_stack = ft_count_num(stack[0]);
	if (pos <= (size_stack / 2))
	{
		while (pos > 0)
		{
			ft_rotate_stack(stack, NULL);
			pos--;
		}
	}
	else
	{
		while (pos < size_stack)
		{
			ft_reverse_rotate(stack, NULL);
			pos++;
		}
	}
}

void	radix_sort(t_list **stack_a, t_list **stack_b, int b_sz, int f_bit)
{
	int		count_pos;
	t_list	*stack_to_loop;
	t_list	*save_next;

	while (f_bit < b_sz)
	{
		count_pos = ft_count_num(stack_a[0]);
		stack_to_loop = stack_a[0];
		while (count_pos > 0)
		{
			if (!ft_check_order(stack_a[0]))
			{
				save_next = stack_to_loop->next;
				if (((stack_to_loop->num_simplify >> f_bit) & 1) == 0)
					ft_push_stack(stack_a, stack_b, 'b');
				else
					ft_rotate_stack(stack_a, NULL);
				stack_to_loop = save_next;
			}
			count_pos--;
		}
		f_bit++;
		while (stack_b[0] != NULL)
			ft_push_stack(stack_b, stack_a, 'a');
	}
}

int	ft_bits_count(int biggest_number)
{
	int	bit_size;

	bit_size = 0;
	while (biggest_number != 0)
	{
		biggest_number = biggest_number >> 1;
		bit_size++;
	}
	return (bit_size);
}

int	ft_biggest_number(t_list *stack_a)
{
	int		pos_biggest_number;
	int		count;
	t_list	*stack_compare;

	count = 0;
	stack_compare = stack_a;
	while (stack_a != NULL)
	{
		if (stack_compare->num_simplify < stack_a->num_simplify)
		{
			stack_compare = stack_a;
			pos_biggest_number = count;
		}
		else
			pos_biggest_number = stack_compare->num_simplify;
		stack_a = stack_a->next;
		count++;
	}
	return (pos_biggest_number);
}

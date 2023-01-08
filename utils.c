/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:52:13 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/06 13:13:00 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_num(t_list *stack)
{
	int	size_stack;

	size_stack = 0;
	while (stack != NULL)
	{
		stack = stack->next;
		size_stack++;
	}
	return (size_stack);
}

void	simplify_numbers(t_list **stack_a)
{
	int		count;
	t_list	*stack_compare;
	t_list	*stack_move;

	stack_compare = stack_a[0];
	while (stack_compare != NULL)
	{
		count = 0;
		stack_move = stack_a[0];
		while (stack_move != NULL)
		{
			if (stack_compare->num > stack_move->num)
				count++;
			stack_move = stack_move->next;
		}
		stack_compare->num_simplify = count;
		stack_compare = stack_compare->next;
	}
}

int	ft_find_smallest_num(t_list *stack)
{
	int		pos_smallest_num;
	int		count;
	t_list	*stack_compare;

	count = 0;
	stack_compare = stack;
	while (stack != NULL)
	{
		if (stack_compare->num_simplify > stack->num_simplify)
		{
			stack_compare = stack;
			pos_smallest_num = count;
		}
		stack = stack->next;
		count++;
	}
	return (pos_smallest_num);
}

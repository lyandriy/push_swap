/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:15 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/06 17:52:15 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_swap(t_list **stack_a)
{
	int	size_stack;
	int	check_order;

	check_order = ft_check_order(stack_a[0]);
	if (check_order == 0)
	{
		size_stack = ft_count_num(stack_a[0]);
		simplify_numbers(stack_a);
		if (size_stack == 2)
			ft_sort_two(stack_a);
		else if (size_stack == 3)
			ft_sort_three(stack_a);
		else if (size_stack <= 5)
			ft_sort_five(stack_a, size_stack);
		else if (size_stack > 5)
			ft_sort_stack(stack_a);
	}
}

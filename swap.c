/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:43 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/06 13:36:12 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execution_swap(t_list **stack)
{
	t_list	*aux;

	aux = stack[0];
	stack[0] = stack[0]->next;
	aux->next = aux->next->next;
	stack[0]->next = aux;
}

void	ft_swap_stack(t_list **stack_a, t_list **stack_b)
{
	if (stack_b == NULL)
	{
		ft_execution_swap(stack_a);
		write (1, "sa\n", 3);
	}
	else if (stack_a == NULL)
	{
		ft_execution_swap(stack_b);
		write (1, "sb\n", 3);
	}
	else
	{
		ft_execution_swap(stack_a);
		ft_execution_swap(stack_b);
		write (1, "ss\n", 3);
	}
}

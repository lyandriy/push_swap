/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:34 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/07 16:28:12 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execution_rotate(t_list **stack)
{
	t_list	*aux;

	aux = stack[0];
	aux = aux->next;
	(*stack)->next = NULL;
	ft_lstadd_back(&aux, *stack);
	stack[0] = aux;
}

void	ft_rotate_stack(t_list **stack_a, t_list **stack_b)
{
	if (stack_b == NULL)
	{
		ft_execution_rotate(stack_a);
		write (1, "ra\n", 3);
	}
	else if (stack_a == NULL)
	{
		ft_execution_rotate(stack_b);
		write (1, "rb\n", 3);
	}
	else
	{
		ft_execution_rotate(stack_a);
		ft_execution_rotate(stack_b);
		write (1, "rr\n", 3);
	}
}

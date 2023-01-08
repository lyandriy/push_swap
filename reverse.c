/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:30 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/06 13:16:54 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execution_reverse(t_list **stack)
{
	t_list	*aux;
	t_list	*temp;

	aux = stack[0];
	temp = stack[0];
	stack[0] = ft_lstlast(stack[0]);
	while (aux->next != NULL)
	{
		if (aux->next->next->next == NULL)
			aux->next->next = NULL;
		aux = aux->next;
	}
	stack[0]->next = temp;
}

void	ft_reverse_rotate(t_list **stack_a, t_list **stack_b)
{
	if (stack_b == NULL)
	{
		ft_execution_reverse(stack_a);
		write (1, "rra\n", 4);
	}
	else if (stack_a == NULL)
	{
		ft_execution_reverse(stack_b);
		write (1, "rrb\n", 4);
	}
	else
	{
		ft_execution_reverse(stack_a);
		ft_execution_reverse(stack_b);
		write (1, "rrr\n", 4);
	}
}

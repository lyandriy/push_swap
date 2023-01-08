/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:25 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/05 23:59:19 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_stack(t_list **stack_on, t_list **stack_in, char whatstack)
{
	t_list	*temp;

	if (stack_on[0])
	{
		temp = stack_on[0];
		stack_on[0] = stack_on[0]->next;
		temp->next = stack_in[0];
		stack_in[0] = temp;
		if (whatstack == 'a')
			write (1, "pa\n", 3);
		if (whatstack == 'b')
			write (1, "pb\n", 3);
	}
}

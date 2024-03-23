/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:09 by lyandriy          #+#    #+#             */
/*   Updated: 2023/10/02 19:52:31 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit (0);
}

int	main(int argc, char **argv)
{
	int		count;
	t_list	*stack_a;
	t_list	*save;

	stack_a = NULL;
	count = 1;
	if (argc < 2)
		return (0);
	while (count < argc)
	{
		save = ft_create_stack_a(argv[count]);
		if (save == NULL)
			ft_error();
		ft_lstadd_back(&stack_a, save);
		count++;
	}
	if (ft_check_duplicate(stack_a) == NULL)
		ft_error();
	if (stack_a->next != NULL)
		ft_push_swap(&stack_a);
	exit (0);
	return (0);
}

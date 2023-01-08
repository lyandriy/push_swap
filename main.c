/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:09 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/07 19:02:37 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		count;
	t_list	*stack_a;
	//t_list	*save;

	stack_a = NULL;
	count = 1;
	if (argc < 2)
		return (0);
	while (count < argc)
	{
		//save = ft_create_stack_a(argv[count]);
		//if (save == NULL)
		if (ft_create_stack_a(argv[count]) == NULL)
		{
			write (2, "Error\n", 6);
			exit (0);
		}
		//ft_lstadd_back(&stack_a, save);
		ft_lstadd_back(&stack_a, ft_create_stack_a(argv[count]));
		count++;
	}
	if (ft_check_duplicate(stack_a) == NULL)
	{
		write (2, "Error\n", 6);
		exit (0);
	}
	ft_push_swap(&stack_a);
	return (0);
}

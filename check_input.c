/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:35:37 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/17 20:52:57 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_create_stack_a(const char *str)
{
	int			pos;
	long int	i;
	t_list		*stack_a;
	t_list		*save;

	stack_a = NULL;
	pos = ft_check_input(str);
	if (pos == 0)
	{
		while (str[pos] != '\0')
		{
			i = ft_atoi(&str[pos], &pos);
			if (i < -2147483648 || i > 2147483647)
				return (NULL);
			if (!(i == 0 && str[pos - 1] != '0'))
			{
				save = ft_new_nodo(i);
				ft_lstadd_back(&stack_a, save);
			}
		}
	}
	else
		return (NULL);
	return (stack_a);
}

int	ft_check_input(const char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] > 47 && str[pos] < 58)
		{
			pos++;
			if (str[pos] == '-' || str[pos] == '+')
				return (1);
		}
		else if (str[pos] == '+' || str[pos] == '-')
		{
			pos++;
			if (!(str[pos] > 47 && str[pos] < 58))
				return (1);
			if (str[pos] == '+' || str[pos] == '-')
				return (1);
		}
		else if (str[pos] == 32)
			pos++;
		else
			return (1);
	}
	return (0);
}

long int	ft_atoi(const char *str, int *pos)
{
	int					i;
	int					neg;
	unsigned long int	num;

	neg = 1;
	num = 0;
	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	*pos += i;
	return (num * neg);
}

t_list	*ft_check_duplicate(t_list *stack_a)
{
	t_list	*check;
	t_list	*copy;

	check = NULL;
	copy = stack_a;
	while (copy != NULL)
	{
		check = copy;
		check = check->next;
		while (check != NULL)
		{
			if (check->num == copy->num)
				return (NULL);
			check = check->next;
		}
		copy = copy->next;
	}
	return (stack_a);
}

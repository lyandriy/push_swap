/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:39 by lyandriy          #+#    #+#             */
/*   Updated: 2023/01/05 23:56:13 by lyandriy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_new_nodo(int num)
{
	t_list	*new_nodo;

	new_nodo = malloc(sizeof(t_list));
	if (!new_nodo)
		return (NULL);
	new_nodo->num = num;
	new_nodo->next = NULL;
	return (new_nodo);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new_nodo;

	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_nodo = lst;
		lst = lst->next;
	}
	return (new_nodo);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

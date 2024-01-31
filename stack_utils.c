/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:45:05 by psitkin           #+#    #+#             */
/*   Updated: 2024/01/31 22:48:00 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_elem(int data)
{
	t_node	*res;

	res = malloc(sizeof(t_node));
	if (res)
	{
		res->next = NULL;
		res->data = data;
	}
	else
		return (NULL);
	return (res);
}

t_stack	*create_stack(void)
{
	t_stack	*res;

	res = malloc(sizeof(t_stack));
	if (res)
	{
		res->head = NULL;
	}
	return (res);
}

void	print_stack(t_stack *s)
{
	t_node	*tmp;

	tmp = s->head;
	while (tmp)
	{
		ft_putstr(tmp->data);
		ft_putstr("->");
		tmp = tmp->next;
	}
	ft_putchar('END\n');
}
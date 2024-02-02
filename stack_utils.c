/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:45:05 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/02 23:46:12 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_elem(int data)
{
	t_node	*res;

	res = malloc(sizeof(t_node));
	ft_putstr_fd("creating\n", 1);
	if (!res)
		return (NULL);
	ft_putstr_fd("created\n", 1);
	res->next = NULL;
	res->data = data;
	return (res);
}

t_stack	*create_stack(void)
{
	t_stack	*res;

	res = malloc(sizeof(t_stack));
	if (!res)
		return (NULL);
	res->head = NULL;
	return (res);
}



void	push(t_stack *s, int data)
{
	t_node	*tmp;

	tmp = create_elem(data);
	if (!tmp)
		return ;
	tmp->next = s->head;
	s->head = tmp;
}

t_node	*pop(t_stack *s)
{
	t_node	*res;

	if (s! || !s->head)
		return (NULL);
	res = s->head;
	res->next = NULL;
	s->head = s->head->next;
	return (res);
}

void	clean_stack(t_stack *s)
{
	t_node	*tmp;

	while (s->head)
	{
		tmp = s->head;
		s->head = s->head->next;
		free(tmp);
	}
}

void	delete_stack(t_stack **s)
{
	clean_stack(*s);
	free(*s);
	s = NULL;
}

void	print_stack(t_stack *s)
{
	t_node	*tmp;

	tmp = s->head;
	while (tmp)
	{
		ft_putnbr_fd(tmp->data, 1);
		ft_putstr_fd("->", 1);
		tmp = tmp->next;
	}
	ft_putchar_fd('END\n');
}
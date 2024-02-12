/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:39:39 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/12 19:58:21 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	t_node *tmp;
	
	if (stack->size < 2)
		return;
	tmp = stack->head;
	stack->head = tmp->next;
	tmp->next = stack->head->next;
	stack->head->next = tmp;
}

void	sa(t_push_swap *stacks)
{
	swap(stacks->a);
	write(1, "sa\n", 3);
}

void	sb(t_push_swap *stacks)
{
	swap(stacks->b);
	write(1, "sb\n", 3);
}

void	ss(t_push_swap *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
	write(1, "ss\n", 3);
}
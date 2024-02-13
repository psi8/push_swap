/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deconstructors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:21:36 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/13 20:26:42 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clean_stack(t_stack *s)
{
	t_node	*tmp;

	while (s->head)
	{
		tmp = s->head;
		s->head = s->head->next;
		free(tmp);
	}
	s->size = 0;
}

void	delete_stack(t_stack **s)
{
	clean_stack(*s);
	free (*s);
	*s = NULL;
}

void	delete_push_swap(t_push_swap **stacks)
{
	delete_stack(&(*stacks)->a);
	delete_stack(&(*stacks)->b);
	free(*stacks);
	*stacks = NULL;
}

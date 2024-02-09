/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:03:45 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/09 20:27:27 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_elem(int data)
{
	t_node	*res;

	res = malloc(sizeof(t_node));
	if (!res)
		return (NULL);
	res->next = NULL;
	res->rank = -1;
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
	res->tail = NULL;
	res->size = 0;
	return (res);
}

t_push_swap	*create_push_swap(void)
{
	t_push_swap	*res;

	res = malloc(sizeof(t_push_swap));
	if (!res)
		return (NULL);
	res->a = create_stack();
	res->b = create_stack();
	return (res);
}
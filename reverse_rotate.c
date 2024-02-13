/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 20:55:20 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/13 21:08:28 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack *s)
{
	if (s->size < 2)
		return ;
	push(s, shift(s));
}

void	rra(t_push_swap *stacks)
{
	reverse_rotate(stacks->a);
	write(1, "rra\n", 4);
}

void	rrb(t_push_swap *stacks)
{
	reverse_rotate(stacks->b);
	write(1, "rrb\n", 4);
}

void	rrr(t_push_swap *stacks)
{
	reverse_rotate(stacks->a);
	reverse_rotate(stacks->b);
	write(1, "rrr\n", 4);
}

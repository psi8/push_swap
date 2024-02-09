/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:58:37 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/09 23:02:50 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack *s)
{
	if (s->size < 2)
		return ;
	unshift(s, pop(s));
}

void	ra(t_push_swap *stack)
{
	rotate(stacks->a);
	write (1, "ra\n", 3);
}

void	rb(t_push_swap	*stacks)
{
	rotate(stacks->b);
	write(1, "rb\n", 3);
}

void	rr(t_push_swap	*stacks)
{
	rotate(stacks->a);
	rotate(stacks->b);
	write(1, "rr\n", 3);
}
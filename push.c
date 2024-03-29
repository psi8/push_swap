/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:47:43 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/09 21:22:28 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_from_stack (t_stack *from, t_stack *to)
{
	t_node	*tmp;
	
	tmp = pop(from);
	if (!tmp)
		return ;
	push(to, tmp);
}

void	pa(t_push_swap *stacks)
{
	move_from_stack(stacks->b, stacks->a);
	write(1, "pa\n", 3);
}

void	pb(t_push_swap *stacks)
{
	move_from_stack(stacks->a, stacks->b);
	write(1, "pb\n", 3);
}

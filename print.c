/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 20:33:30 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/09 20:39:18 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_stack(t_stack *s)
{
	t_node	*tmp;

	tmp = s->head;
	ft_putstr_fd("[", 1);
	ft_putnbr_fd(s->size, 1);
	ft_putstr_fd("]", 1);
	while (tmp)
	{
		ft_putnbr_fd(tmp->data, 1);
		ft_putstr_fd(" -> ", 1);
		tmp = tmp->next;
	}
	ft_putstr_fd("END\n", 1);
}

void	print_push_swap(t_push_swap *stacks)
{
	ft_putstr_fd("A: ", 1);
	print_stack(stacks->a);
	ft_putstr_fd("B: ", 1);
	print_stack(stacks->b);
}


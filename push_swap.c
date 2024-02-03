/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:38:34 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/03 21:11:55 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
	t_push_swap	*info;

	info = create_push_swap();
	push(info->a, create_elem(1));
	push(info->a, create_elem(2));
	push(info->a, create_elem(3));
	push(info->a, create_elem(4));
	print_stack(info->a);
	print_stack(info->b);
	pb(info);
	print_stack(info->a);
	print_stack(info->b);
	pb(info);
	print_stack(info->a);
	print_stack(info->b);
	pa(info);
	print_stack(info->a);
	print_stack(info->b);
	return (0);
}

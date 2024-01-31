/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:38:53 by psitkin           #+#    #+#             */
/*   Updated: 2024/01/31 20:36:32 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	struct s_node	*next;
	int				data;
}			t_node;

typedef struct s_stack
{
	struct s_node	*head;
}			t_stack;

# include <unistd.h>
# include <stdlib.h>

#endif
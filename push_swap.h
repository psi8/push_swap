/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 19:38:53 by psitkin           #+#    #+#             */
/*   Updated: 2024/02/12 22:39:42 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	struct s_node	*next;
	int				rank;
	int				data;
}			t_node;

typedef struct s_stack
{
	struct s_node	*head;
	struct s_node	*tail;
	int				size;
}			t_stack;

typedef struct s_push_swap
{
	struct s_stack	*a;
	struct s_stack	*b;
}			t_push_swap;

t_node		*create_elem(int data);
t_stack		*create_stack(void);
t_push_swap	*create_push_swap(void);

void		push(t_stack *s, t_node *new);
t_node		*pop(t_stack *s);
void		unshift(t_stack *s, t_node *new);
t_node		*shift(t_stack *s);

void		delete_stack(t_stack **s);
void		delete_push_swap(t_push_swap **stacks);

void		print_push_swap(t_push_swap *stacks);


void		sa(t_push_swap *stacks);
void		sb(t_push_swap *stacks);
void		ss(t_push_swap *stacks);

void		pa(t_push_swap *stacks);
void		pb(t_push_swap *stacks);

int			parse_item(const char *item, t_push_swap *stacks);
void		delete_split(char	**splits);
long long	ft_simple_atoi(const char *str);
int			parse_input(int ac, char **av, t_push_swap *stacks);

#define	INT_MIN	-2147483648
#define	INT_MAX	2147483647

# include <unistd.h>
# include <stdlib.h>
# include "libft_push_swap/libft.h"

#endif
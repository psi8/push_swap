/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psitkin <psitkin@hive.student.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:12:48 by psitkin           #+#    #+#             */
/*   Updated: 2023/11/19 20:19:57 by psitkin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char	*ft_null(size_t n, char *new)
{
	if (n == 0)
	{
		new[0] = '0';
		new[1] = '\0';
	}
	return (new);
}

char	*ft_itoa(int n)
{
	size_t	length;
	int		sign;
	char	*new;

	length = 0;
	sign = 1;
	if (n < 0)
		sign = -1;
	length = ft_len(n);
	new = (char *)malloc (sizeof(char) * (length + 1));
	if (!new)
		return (new);
	ft_null(n, new);
	new[length] = '\0';
	while (n != 0)
	{
		length--;
		new[length] = (char)(((n % 10) * sign) + '0');
		n = n / 10;
	}
	length--;
	if (sign < 0)
		new[length] = '-';
	return (new);
}

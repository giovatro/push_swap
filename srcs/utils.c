/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:49:57 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 17:10:23 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_atoi_custom(const char *str)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			exit_error();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		exit_error();
	return (mod * i);
}

int	ft_min(t_stack *a)
{
	int		i;

	i = a->number;
	while (a)
	{
		if (a->number < i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int		i;

	i = a->number;
	while (a)
	{
		if (a->number > i)
			i = a->number;
		a = a->next;
	}
	return (i);
}

/* 

ft_min finds and returns the smallest number in the given stack.

ft_max finds and returns the biggest number in the given stack.

*/
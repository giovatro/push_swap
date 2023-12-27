/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:40:01 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/27 15:44:54 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->number;
	while (stack_a)
	{
		if (i > stack_a->number)
			return (0);
		i = stack_a->number;
		stack_a = stack_a->next;
	}
	return (1);
}

/* check_sorted checks if the stack is sorted */

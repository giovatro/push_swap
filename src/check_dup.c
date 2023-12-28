/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 14:37:01 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/28 14:41:48 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_stack *a)
{
	t_stack	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->number == tmp->number)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

/* Check if the stack includes any duplicate numbers. */
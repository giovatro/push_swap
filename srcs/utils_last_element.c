/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_element_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:37:31 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/27 16:05:18 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *last_element(t_stack *last)
{
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}

int	last_element_size(t_stack *last)
{
	size_t	i;

	i = 0;
	while (last)
	{
		last = last->next;
		i++;
	}
	return (i);
}

/* 
last_element returns the last element of the stack 
last_size returns the size of the stack
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:25:07 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 17:36:45 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	back_node(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(last_element(*stack))->next = new_stack;
}

/* 
back_node adds a new node to the stack from back side
*/
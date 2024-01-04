/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:42:26 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 11:10:07 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_node_from_back(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(last_element(*stack))->next = new_stack;
}

t_stack	*new_node(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		exit_error();
	new->number = nbr;
	new->next = NULL;
	return (new);
}

/* 

add_node_from_back adds a new node to the stack from back side.
Stacks may be considered circular linked lists. 
It means the last element of the stack is not the last element,
it's an element before the first element

new_node creates a new node with the given number. 

*/
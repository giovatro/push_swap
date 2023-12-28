/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:42:26 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 17:48:04 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_stack *new_stack(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof (t_stack));
	if (!new)
		exit_error();
	new->number = nbr;
	new->next = NULL;
	return (new);
}

/* Creates new stack node with given number */
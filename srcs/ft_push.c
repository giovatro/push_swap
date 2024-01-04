/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:09:29 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 11:08:40 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack **a, t_stack **b, int nbr)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	if (nbr == 0)
		write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, int nbr)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	if (nbr == 0)
		write(1, "pb\n", 3);
}

/*

pa takes the first element at the top of b and put it at the top of a. 
Do nothing if b is empty.

pb takes the first element at the top of a and put it at the top of b.

*/

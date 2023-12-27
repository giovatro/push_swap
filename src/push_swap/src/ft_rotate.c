/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:20:19 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/27 17:27:03 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int nbr)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next))
		return ;
	tmp = *a;
	*a = last_element(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;
	if (nbr == 0)
		write(1, "ra\n", 1);
}

void	rb(t_stack **b, int nbr)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = last_element(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (nbr == 0)
		write(1, "rb\n", 1);
}

void	rr(t_stack **a, t_stack **b, int nbr)
{
	t_stack	*tmp;

	if (!*a || !*b || !((*a)->next) || !((*b)->next))
		return ;
	tmp = *a;
	*a = last_element(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;	
	tmp = *b;
	*b = last_element(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (nbr == 0)
		write(1, "rb\n", 1);
}


/*

ra: shift up all elements of stack a by 1. The first element becomes the last one.
rb does the same with stack b.
rr: ra and rb at the same time.

*/
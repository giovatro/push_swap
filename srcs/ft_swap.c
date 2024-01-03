/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:09:47 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/27 16:46:08 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **a, int nbr)
{
	t_stack	*tmp;

	if (!*a || !((*a)->next))
			return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	if (nbr == 0)
		write(1, "sa\n", 3);
}

void	sb(t_stack **b, int nbr)
{
	t_stack	*tmp;

	if (!*b || !((*b)->next))
			return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (nbr == 0)
		write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b, int nbr)
{
	t_stack	*tmp;

	if (!*a || !*b || !((*a)->next) || !((*b)->next))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = (*a)->next;
	(*a)->next = tmp;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (nbr == 0)
		write(1, "ss\n", 3);
}	

/*
sa: swap the first 2 elements at the top of stack a. It doesn't nothing if there is only one or no elements.
sb does the same above with stack b. It doesn't nothing if there is only one or no elements.
ss: sa and sb at the same time
*/

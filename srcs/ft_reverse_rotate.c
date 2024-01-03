/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:57:12 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/28 14:06:14 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_stack **a, int nbr)
{
	t_stack	*tmp;
	int	i;

	if (!*a || !((*a)->next))
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (nbr == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int nbr)
{
	t_stack	*tmp;
	int	i;

	if (!*b || !((*b)->next))
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (nbr == 0)
		write(1, "rrb\n", 4);
}



void	rrr_aux(t_stack **b, int nbr)
{
	t_stack	*tmp;
	int	i;

	if (!*b || !((*b)->next))
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (nbr == 0)
		write(1, "rrr\n", 4);
}

void	rrr(t_stack **a, t_stack **b, int nbr)
{
	t_stack	*tmp;
	int	i;

	if (!*a || !*b || !((*a)->next) || !((*b)->next))
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	rrr_aux(b, nbr);
}

/*
rra: shift down all elements of stack a by 1. The last element becomes the first one.
rrb does the same with stack b.
rrr: rra and rrb at the same time.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:46:40 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/03 11:46:50 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->number);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->number))
			i = ft_case_rarb(a, b, tmp->number);
		if (i > ft_case_rrarrb(a, b, tmp->number))
			i = ft_case_rrarrb(a, b, tmp->number);
		if (i > ft_case_rarrb(a, b, tmp->number))
			i = ft_case_rarrb(a, b, tmp->number);
		if (i > ft_case_rrarb(a, b, tmp->number))
			i = ft_case_rrarb(a, b, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->number);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->number))
			i = ft_case_rarb_a(a, b, tmp->number);
		if (i > ft_case_rrarrb_a(a, b, tmp->number))
			i = ft_case_rrarrb_a(a, b, tmp->number);
		if (i > ft_case_rarrb_a(a, b, tmp->number))
			i = ft_case_rarrb_a(a, b, tmp->number);
		if (i > ft_case_rrarb_a(a, b, tmp->number))
			i = ft_case_rrarb_a(a, b, tmp->number);
		tmp = tmp->next;
	}
	return (i);
}

/* 

ft_rotate_type_ba calculates and decides which rotation combination is best to use to sort the stack. 
After rotation, there is always one push operation is left to do, which i embeded to code.
Function is used during push from A to B.

ft_rotate_type_ba calculates and decides which rotation combination is best to use to sort the stack. 
Function is used during push from B to A.

*/
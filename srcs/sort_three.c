/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:20:15 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 10:56:33 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->number)
	{
		rra(stack_a, 0);
		sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->number)
	{
		ra(stack_a, 0);
		if (!check_is_sorted(*stack_a))
			sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			rra(stack_a, 0);
		else
			sa(stack_a, 0);
	}
}

/*

This function sort the stack if there are only three elements in the stack.
 
*/

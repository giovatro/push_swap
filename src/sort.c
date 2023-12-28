/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:46:40 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/28 15:23:39 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_till_three(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	while (last_element_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	
	}
}

t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (last_element_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (last_element_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (last_element_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
		sort_till_three(stack_a, &stack_b);
}

void	sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (last_element_size(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = sort_b(stack_a);
	}
}	

/*

 sort(function) sorts the stack_a if there are more than 2 elements in the stack_a.
 It makes the final sort in stack_a after all values pushed to stack_b, sorted and pushed back to stack_a. 
 Because, even the stack_a is sorted at the end, the minimum number have to be at the top of the stack_a. 
 So, it simply brings the smallest number of the stack_a to the top.

 */

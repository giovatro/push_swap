/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:46:40 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 11:00:09 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	**sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarb(stack_a, stack_b, tmp->number, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->number, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->number, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->number, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	sort_b_till_three(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;

	while (stack_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarb(stack_a, stack_b, tmp->number, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->number, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->number, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->number))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->number, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack	*sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (stack_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (stack_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (stack_size(*stack_a) > 3 && !check_is_sorted(*stack_a))
		sort_b_till_three(stack_a, &stack_b);
	if (!check_is_sorted(*stack_a))
		sort_three(stack_a);
	return (stack_b);
}

void	sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (stack_size(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = sort_b(stack_a);
		stack_a = sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < stack_size(*stack_a) - i)
		{
			while ((*stack_a)->number != ft_min(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->number != ft_min(*stack_a))
				rra(stack_a, 0);
		}
	}
}

/*

sort(function) sorts the stack_a if there are 
more than 2 elements in the stack_a.
It makes the final sort in stack_a after all values pushed to stack_b, 
sorted and pushed back to stack_a. 

Because, even the stack_a is sorted at the end, 
the minimum number have to be at the top of the stack_a. 
So, it simply brings the smallest number of the stack_a to the top.

sort_b pushes one by one all the elements in stack_a to the stack_b, 
until only three elements are left in stack_a. 
While pushing, it makes sure if the stack_b is sorted. 
When three elements are left, it calls the sort_till_three function 
to sort left over elements in stack_a.

sort_till_three sorts and pushes stacks until 3 members left behind.

sort_a is pushing back the elements from stack_b 
to stack_a until stack_b is empty. 
 
 */

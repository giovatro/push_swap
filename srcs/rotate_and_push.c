/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:47:24 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/03 12:47:27 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c && ft_find_place_b(*b, c) > 0)
			rr(a, b, 0);
		while ((*a)->number != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->number != c && ft_find_place_a(*a, c) > 0)
			rr(a, b, 0);
		while ((*b)->number != c)
			rb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c && ft_find_place_b(*b, c) > 0)
			rrr(a, b, 0);
		while ((*a)->number != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->number != c && ft_find_place_a(*a, c) > 0)
			rrr(a, b, 0);
		while ((*b)->number != c)
			rrb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		while ((*b)->number != c)
			rb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->number != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		while ((*b)->number != c)
			rrb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}


/*

 ft_apply_rarb rotates both stack_a and stack_b in the same direction as required amount.

 ft_apply_rrarrb rotates both stack_a and stack_b in the reverse direction as required amount.

 ft_apply_rrarb rotates the stack_a in reverse direction, the stack_b in opposite direction of stack_a as required amount.

 ft_apply_rarrb rotates the stack_b in reverse direction, the stack_a in opposite direction of stack_b as required amount.

*/
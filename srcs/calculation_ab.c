/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation_ab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 11:23:34 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 11:18:10 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = stack_size(b) - ft_find_place_b(b, c);
	if ((i < (stack_size(a) - ft_find_index(a, c)))
		&& ft_find_index(a, c))
		i = stack_size(a) - ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = stack_size(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = stack_size(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}

/*

 ft_case_rarb calculates how many times we should rotate the stacks together.
 Because after a certain amoun of rotate, 
 we will proceed only with one stack rotation.

 ft_case_rrarrb calculates how many times we should rotate the stacks together.
 Since here we have reverse rotate, rather than index number, 
 we check reverse index number which is calculated by stack_size - index_number.

 ft_case_rrarb do same calculations for rra+rb case.

 ft_case_rarrb do same calculations for ra+rrb case.

 */

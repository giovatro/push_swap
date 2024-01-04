/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:28:35 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/27 15:37:39 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
		return (0);
	stack_a = fill_stack_with_values(argc, argv);
	if (!stack_a || check_dup(stack_a))
	{
		free_stack(&stack_a);
		exit_error();
	}
	if (!check_is_sorted(stack_a))
		sort(&stack_a);
	free_stack(&stack_a);
	return (0);
}

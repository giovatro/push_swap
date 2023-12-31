/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_with_values.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:35:18 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 11:13:54 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*split_string(char **argv)
{
	t_stack	*stack_a;
	char	**temp;
	int		i;
	int		nbr;

	stack_a = NULL;
	i = 0;
	temp = ft_split(argv[1], ' ');
	while (temp[i])
	{
		nbr = ft_atoi_custom(temp[i]);
		add_node_from_back(&stack_a, new_node(nbr));
		i++;
	}
	free_string(temp);
	free(temp);
	return (stack_a);
}

t_stack	*fill_stack_with_values(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	int		nbr;

	i = 1;
	stack_a = NULL;
	if (2 == argc)
		stack_a = split_string(argv);
	else
	{
		while (i < argc)
		{
			nbr = ft_atoi_custom(argv[i]);
			add_node_from_back(&stack_a, new_node(nbr));
			i++;
		}
	}
	return (stack_a);
}

/* 

split_string works and sorts the stack in case of quotation marks. 
In this scenario, the function takes the string, 
and splits the numbers in order to create seperated integer numbers.

fill_stack_with_values does two things 
-  It checks if the number of input is equal to two
	If it is, it means it is a quoted string. Call the split_string function
- It checks if the number of input is greater than two.
	If it is, it lists the arguements.

 */

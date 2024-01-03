/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:35:18 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 18:10:22 by gtroiano         ###   ########.fr       */
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
		nbr = ft_atoi(temp[i]);
		back_node(&stack_a, new_stack(nbr));
		i++;
	}
	free_string(temp);
	return (stack_a);
}

t_stack	*logic(int argc, char **argv)
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
			nbr = ft_atoi(argv[i]);
			back_node(&stack_a, new_stack(nbr));
			i++;
		}
	}
	return(stack_a);
}

/* 

split_string works and sorts the stacks in case of they are passed in between quotation marks. 
In this scenario, the function takes the string, and splits the numbers in order to create seperated integer number.

logic does two things 
-  It checks if the number of input is equal to two
	If it is, it means it is a quoted string. Call the spiit_string function
- It checks if the number of input is greater than two.
	If it is, it lists the arguements.

 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:35:18 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 18:10:22 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*split_string(char *argv)
{
	t_stack	*stack_a;
	char	**temp;
	int		i;
	int		j;

	stack_a = NULL;
	i = 0;
	temp = ft_split(argv[1], ' ');
	while (temp[i])
	{
		j = ft_atoi2(temp[i]);
		back_node(&stack_a, new_stack(j));
		i++;
	}
	free_string(temp);
	free(temp);
	return (stack_a);
}

t_stack	*logic(int argc, char **argv)
{
	t_stack	*stack_a;
	int		i;
	int		j;

	i = 1;
	stack_a = NULL;
	if (argc < 2)
		exit_error();
	if (2 == argc)
	   stack_a = split_string(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i]);
			back_node(&stack_a, new_stack(j));
			i++;
		}
	}
	return(stack_a);
}

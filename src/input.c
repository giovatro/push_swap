/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:35:18 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/13 17:49:39 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//see input_utils for sign
//see input_utils for digit


static int	number(char **argv)
{
	int	i;

	i = 0;
	if (sign(argv[i] && argv[i + 1]) != '\0')
		i++;
	while (argv[i] && digit(argv[i]))
		i++;
	if (argv[i] != '\0' && !digit(argv[i]))
		return (0);
	return (1);
}

int	check_input(char **argv)
{
	int	i;
	int nb_zeros;

	nb_zeros = 0;
	i = 1;
	while (argv[i])
	{
		if (!number(argv[i])) //here check if arguments are not numbers
			return (0);
	}
}

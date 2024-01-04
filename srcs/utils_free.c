/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:55:02 by gtroiano          #+#    #+#             */
/*   Updated: 2024/01/04 11:10:46 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack)
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		(*stack)->number = 0;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	free_string(char **s)
{
	char	*n;

	if (!s)
		return ;
	while (*s)
	{
		n = *s;
		s++;
		free(n);
	}
	*s = NULL;
}

/* 
 
 free_stack frees the stack.

 free_string free the string which is the integer values in between quotes.

*/

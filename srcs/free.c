/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:55:02 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 18:04:29 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	free_stack(t_stack **last)
{
	t_stack	*tmp;

	if (!last)
		return ;
	while (*last)
	{
		tmp = (*last)->next;
		(*last)->number = 0;
		free(*last);
		*last = tmp;
	}
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
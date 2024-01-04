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

void	free_stack(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->number = 0;
		free(*lst);
		*lst = tmp;
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

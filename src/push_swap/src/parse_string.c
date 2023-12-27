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

#include "push_swap.h"

void	ft_free(char **s)
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

/* free_string frees the stack. */
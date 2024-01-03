/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtroiano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:24:00 by gtroiano          #+#    #+#             */
/*   Updated: 2023/12/20 16:37:35 by gtroiano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	long			number;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
} t_stack;

void		back_node(t_stack **stack, t_stack *new_stack);
int			check_dup(t_stack *a);
int			check_is_sorted(t_stack *stack_a);
void		exit_error(void);
t_stack		*split_string(char **argv);
t_stack		*logic(int argc, char **argv);
t_stack		*new_stack(int nbr);
void	free_stack(t_stack **last);
void	free_string(char **s);


/* Sorting */

t_stack		**sort_a(t_stack **stack_a, t_stack **stack_b);
void		sort_b_till_three(t_stack **stack_a, t_stack **stack_b);
t_stack		*sort_b(t_stack **stack_a);
void		sort(t_stack **stack_a);
void		sort_three(t_stack **stack_a);


/* Operations */

void		sa(t_stack **a, int nbr);
void		sb(t_stack **b, int nbr);
void		ss(t_stack **a, t_stack **b, int nbr);
void		pa(t_stack **a, t_stack **b, int nbr);
void		pb(t_stack **a, t_stack **b, int nbr);
void		ra(t_stack **a, int nbr);
void		rb(t_stack **b, int nbr);
void		rr(t_stack **a, t_stack **b, int nbr);
void		rra(t_stack **a, int nbr);
void		rrb(t_stack **b, int nbr);
void		rrr(t_stack **a, t_stack **b, int nbr);
void		rrr_aux(t_stack **b, int nbr);


/* Calculates */

int			ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb(t_stack *a, t_stack *b, int c);


/* Rotations */

int			ft_rotate_type_ab(t_stack *a, t_stack *b);
int			ft_rotate_type_ba(t_stack *a, t_stack *b);


/* Rotate and push */

int			ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);


/* Utils */

t_stack		*last_element(t_stack *last);
int			last_element_size(t_stack *last);
int			ft_find_index(t_stack *a, int nbr);
int			ft_find_place_a(t_stack *stack_a, int nbr_push);
int			ft_find_place_b(t_stack *stack_b, int nbr_push);
int			ft_min(t_stack *a);
int			ft_max(t_stack *a);
int			ft_atoi_custom(const char *str);

#endif

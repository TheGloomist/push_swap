/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/29 19:01:30 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/29 21:54:41 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fuck dis
void	swap_op(t_list **to_swap)
{
	t_list	*first_el;
	t_list	*second_el;

	first_el = *to_swap;
	second_el = first_el->next;
	

	

}

void	sa(t_data *d)
{
	swap_op(&d->stack_a);
}

void	sb(t_data *d)
{
	swap_op(&d->stack_b);
}

void	ss(t_data *d)
{
	swap_op(&d->stack_a);
	swap_op(&d->stack_b);
}
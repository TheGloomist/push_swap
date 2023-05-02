/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 18:31:37 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/02 19:26:57 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_op(t_link **to_rotate)
{
	t_link	*moves_up;
	t_link	*old_head;
	t_link	*becomes_last;

	if (ps_lstsize(*to_rotate) < 3)
		return (swap_op(to_rotate));
	old_head = *to_rotate;
	moves_up = ps_lstlast(*to_rotate);
	becomes_last = moves_up->previous;
	moves_up->previous = NULL;
	moves_up->next = old_head;
	old_head->previous = moves_up;
	becomes_last->next = NULL; 
	(*to_rotate) = moves_up;
}

void	rra(t_data *d)
{
	rev_rotate_op(&d->stack_a);
}

void	rrb(t_data *d)
{
	rev_rotate_op(&d->stack_b);
}

void	rrr(t_data *d)
{
	rev_rotate_op(&d->stack_a);
	rev_rotate_op(&d->stack_b);
}
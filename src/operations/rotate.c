/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 17:46:22 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/04 13:51:41 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_op(t_link **to_rotate)
{
	t_link	*moves_down;
	t_link	*new_head;
	t_link	*second_to_last;

	if (ps_lstsize(*to_rotate) < 3)
		return (swap_op(to_rotate));
	moves_down = *to_rotate;
	new_head = moves_down->next;
	second_to_last = ps_lstlast(*to_rotate);
	moves_down->next = NULL;
	moves_down->previous = second_to_last;
	new_head->previous = NULL;
	second_to_last->next = moves_down;
	(*to_rotate) = new_head;
}

void	ra(t_data *d)
{
	rotate_op(&d->stack_a);
}

void	rb(t_data *d)
{
	rotate_op(&d->stack_b);
}

void	rr(t_data *d)
{
	rotate_op(&d->stack_a);
	rotate_op(&d->stack_b);
}

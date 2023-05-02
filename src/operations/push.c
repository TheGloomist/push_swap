/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/29 21:56:32 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/02 19:23:43 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	px(t_link **to_push, t_link **push_to)
{
	t_link	*to_move;
	t_link	*new_top;

	to_move = *to_push;
	if (to_move == NULL)
		return ;
	new_top = to_move->next;
	if (new_top != NULL)
		new_top->previous = NULL;
	if (*push_to != NULL)
		(*push_to)->previous = to_move;
	to_move->next = *push_to;	
	*push_to = to_move;	
}

void	pa(t_data *d)
{
	px(&d->stack_b, &d->stack_a);
}

void	pb(t_data *d)
{
	px(&d->stack_a, &d->stack_b);
}
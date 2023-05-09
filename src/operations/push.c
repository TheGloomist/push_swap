/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/29 21:56:32 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/09 19:08:52 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	px(t_link **push_from, t_link **push_to)
{
	t_link	*to_move;
	t_link	*new_top;

	to_move = *push_from;
	if (to_move == NULL)
		return (0);
	new_top = to_move->next;
	if (new_top != NULL)
		new_top->previous = NULL;
	if (*push_to != NULL)
		(*push_to)->previous = to_move;
	*push_from = new_top;
	to_move->next = *push_to;
	*push_to = to_move;
	return (1);
}

void	pa(t_data *d)
{
	if (px(&d->stack_b, &d->stack_a) == 1)
		ft_printf("pa\n");
}

void	pb(t_data *d)
{
	if (px(&d->stack_a, &d->stack_b) == 1)
		ft_printf("pb\n");
}

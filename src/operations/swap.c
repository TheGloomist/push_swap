/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/29 19:01:30 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/02 19:28:21 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fuck dis
void	swap_op(t_link **to_swap)
{
	t_link	*moves_down;
	t_link	*moves_up;
	t_link	*third_element;

	moves_down = *to_swap;
	if (moves_down == NULL)
		return ;
	moves_up = moves_down->next;
	third_element = moves_up->next;	
	if (moves_up != NULL)
	{
		moves_up->previous = NULL;
		moves_up->next = moves_down;
		moves_down->previous = moves_up;
	}
	if (third_element != NULL)
	{
		moves_down->next = third_element;
		third_element->previous = moves_down;
	}
	(*to_swap) = moves_up;
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
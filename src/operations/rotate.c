/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/02 17:46:22 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/09 19:24:32 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate_op(t_link **to_rotate)
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
	return(1);
}

void	ra(t_data *d)
{
	if (rotate_op(&d->stack_a) == 1)
	ft_printf("ra\n");
}

void	rb(t_data *d)
{
	if (rotate_op(&d->stack_b) == 1)
	ft_printf("rb\n");
}

void	rr(t_data *d)
{
	int ra;
	int rb;

	ra = rotate_op(&d->stack_a);
	rb = rotate_op(&d->stack_b);
	if (ra == 1 && rb == 1)
		ft_printf("rr\n");
	else if (ra == 1)
		ft_printf("ra\n");
	else if (rb == 1)
		ft_printf("rb\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/29 19:01:30 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/09 19:12:27 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fuck dis
int	swap_op(t_link **to_swap)
{
	t_link	*moves_down;
	t_link	*moves_up;
	t_link	*third_element;

	moves_down = *to_swap;
	if (moves_down == NULL || moves_down->next == NULL)
		return (0);
	moves_up = moves_down->next;
	third_element = moves_up->next;
	moves_up->previous = NULL;
	moves_up->next = moves_down;
	moves_down->previous = moves_up;
	moves_down->next = third_element;
	if (third_element != NULL)
		third_element->previous = moves_down;
	(*to_swap) = moves_up;
	return (1);
}

void	sa(t_data *d)
{
	if (swap_op(&d->stack_a) == 1)
		ft_printf("sa\n");
}

void	sb(t_data *d)
{
	if (swap_op(&d->stack_b) == 1)
		ft_printf("sb\n");
}

void	ss(t_data *d)
{
	int sa;
	int sb;

	sa = swap_op(&d->stack_a);
	sb = swap_op(&d->stack_b);
	if (sa == 1 && sb == 1)
		ft_printf("ss\n");
	else if (sa == 1)
		ft_printf("sa\n");
	else if (sb == 1)
		ft_printf("sb\n");
}
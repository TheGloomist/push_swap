/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/03 19:42:19 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/09 19:47:02 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_sorted(t_data *d)
{
	t_link	*i;

	i = d->stack_a;
	while (i->next != NULL)
	{
		if (i->content > i->next->content || d->stack_b != NULL)
			return (false);
		i = i->next;
	}
	return (true);
}

void	ft_radix_sort(t_data *d)
{
	int	i;
	int	j;
	int	max_number;
	int	max_bits;

	max_number = ps_lstsize(d->stack_a) - 1;
	max_bits = 1;
	while (max_number >> max_bits != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= max_number && !is_sorted(d))
		{
			if (((d->stack_a->content >> i) & 1) == 0)
				pb(d);
			else if (d->stack_a->next != NULL)
				ra(d); 
			j++;
		}
		while (ps_lstsize(d->stack_b))
			pa(d);
		print_link(d->stack_a);
		i++;
	}
}
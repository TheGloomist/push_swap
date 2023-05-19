/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   short_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:17:41 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/19 16:48:50 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_lowest_nbr(t_data *d,t_link **stack)
{
	int		stack_size;
	int		i;
	t_link	*temp;

	stack_size = ps_lstsize(d->stack_a);
	i = 0;
	temp = d->stack_a;
	while (i < stack_size)
	{
		if(temp->content != 0)
		{
			i++;
			temp = temp->next;
		}
		else
			break ;
	}
	return (i);
}

void	sort_rest(t_data *d)
{
	int	stack_size;
	int	lowest_nbr_i;

	stack_size = ps_lstsize(d->stack_a);
	lowest_nbr_i = find_lowest_nbr(d, d->stack_a);
	if (lowest_nbr_i < (stack_size / 2))
	{
		rra(d);
		lowest_nbr_i++;
	}

	

}

void	sort_three(t_data *d)
{
	if (d->stack_a->content == 0)
	{
		rra(d);
		sa(d);
	}
	else if (d->stack_a->content == 1)
	{
		if (d->stack_a->next->content == 0)
			sa(d);
		else
			rra(d);
	}
	else if (d->stack_a->content == 2)
	{
		if (d->stack_a->next->content == 0)
			ra(d);
		else
		{
			sa(d);
			rra(d);
		}
	}
}

void	short_sort(t_data *d)
{
	int	i;

	i = 0;
	if (ps_lstsize(d->stack_a) <= 3 && !is_sorted(d))
		sort_three(d);
	else if (ps_lstsize(d->stack_a) > 3 && !is_sorted(d))
		sort_rest(d);
}
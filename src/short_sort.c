/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   short_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:17:41 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/09/13 17:42:42 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO: change this function to return actual lowest number
//       instead of looking for 0
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
	int	i;

	stack_size = ps_lstsize(d->stack_a);
	lowest_nbr_i = find_lowest_nbr(d, d->stack_a);
	i = 0;
	if (lowest_nbr_i >= (stack_size / 2))
	{
		while (lowest_nbr_i < stack_size)
		{
			rra(d);
			lowest_nbr_i++;
		}
	}
	if (lowest_nbr_i < (stack_size / 2))
	{
		while (lowest_nbr_i )

	}

	

}

// TODO : change sorting 3 elements to work with any number
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

void	sorting(t_data *d)
{
	int	i;
	int	stack_len;

	i = 0;
	stack_len = ps_lstsize(d->stack_a);

	if (!is_sorted(d))
	{
		if (stack_len > 60)
			radix();
		else if (stack_len <= 3)
			sort_three(d);
		else if (stack_len > 3 && stack_len < 60)
			sort_rest(d);
	}
}
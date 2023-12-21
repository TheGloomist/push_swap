/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   short_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:17:41 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/09/20 17:14:14 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO: change this function to return actual lowest number
//       instead of looking for 0
int	find_lowest_nbr(t_link **stack, int stack_size)
{
	int		i;
	int		lowest_num;
	int		lowest_num_pos;

	i = 0;
	lowest_num = (*stack)->content;
	lowest_num_pos = 0;
	while (i < stack_size)
	{
		if((*stack)->content < lowest_num)
		{
			lowest_num = (*stack)->content;
			lowest_num_pos = i;
		}
		i++;
		*stack = (*stack)->content;
	}
	return (lowest_num_pos);
}

void	sort_rest(t_data *d)
{
	int	stack_size;
	int	lowest_nbr_i;
	int	i;

	stack_size = ps_lstsize(d->stack_a);
	lowest_nbr_i = find_lowest_nbr(d->stack_a, stack_size);
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
		while (lowest_nbr_i > 0)
		{
			ra(d);
			lowest_nbr_i--;
		}
	}
	pb(d);
}

// TODO : change sorting 3 elements to work with any number
void	sort_three(t_data *d)
{
	int	top;
	int	mid;
	int	bot;

	top = d->stack_a->content;
	mid = d->stack_a->next->content;
	bot = d->stack_a->next->next->content;

	if (top < mid && mid > bot && top < bot)
	{
		rra(d);
		sa(d);
	}
	else if (top > mid && mid < bot && top < bot)
		sa(d);
	else if (top < mid && mid > bot && top > bot)
		rra(d);
	else if (top > mid && mid < bot && top > bot)
		ra(d);
	else if (top > mid && mid > bot && top > bot)
		{
			ra(d);
			sa(d);
		}
}

	// if (d->stack_a->content == 0)
	// {
	// 	rra(d);
	// 	sa(d);
	// }
	// else if (d->stack_a->content == 1)
	// {
	// 	if (d->stack_a->next->content == 0)
	// 		sa(d);
	// 	else
	// 		rra(d);
	// }
	// else if (d->stack_a->content == 2)
	// {
	// 	if (d->stack_a->next->content == 0)
	// 		ra(d);
	// 	else
	// 	{
	// 		sa(d);
	// 		rra(d);
	// 	}
	// }

void	sorting(t_data *d)
{
	int	i;
	int	stack_len;

	i = 0;
	stack_len = ps_lstsize(d->stack_a);

	if (!is_sorted(d))
	{
		if (stack_len > 60)
			ft_radix_sort(d);
		else if (stack_len <= 3)
			sort_three(d);
		else if (stack_len > 3 && stack_len < 60)
			sort_rest(d);
	}
}
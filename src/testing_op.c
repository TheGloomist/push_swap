/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testing_op.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/03 15:03:49 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/17 14:18:19 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_operations(t_data *d)
{	
	int threshhold;

	threshhold = 60;
	// rra(d);
	if (ps_lstsize(d->stack_a) > threshhold)
		ft_radix_sort(d);
	else
		short_sort(d);
}

void	print_link(t_link *to_print)
{
	t_link *temp;

	temp = to_print;
	while (temp != NULL)
	{
		printf("%i ", temp->content);
		temp = temp->next;
	}
	printf("\n");
}

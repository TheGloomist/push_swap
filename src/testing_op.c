/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testing_op.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/03 15:03:49 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/03 15:22:06 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test_operations(t_data *d)
{	
	// pb(d);
	sa(d);
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

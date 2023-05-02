/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:54:08 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/02 19:37:09 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_link(t_data *d)
{
	t_link *temp;

	temp = d->stack_a;
	while (temp != NULL)
	{
		printf("Stack a is: %i\n", temp->content);
		temp = temp->next;
	}

}


// bzero will set everything in data struct to 0
int	main(int argc, char **argv)
{
	t_data	d;

	if (argc < 2)
		return (0);
	ft_bzero(&d, sizeof(t_data));
	parsing(&d, argc, argv);
	make_linked_list(&d, argc);
	print_link(&d); // for testing
}

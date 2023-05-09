/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:54:08 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/09 19:31:33 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// bzero will set everything in data struct to 0
int	main(int argc, char **argv)
{
	t_data	d;

	if (argc < 2)
		return (0);
	ft_bzero(&d, sizeof(t_data));
	parsing(&d, argc, argv);
	translate_input(&d, argc);
	make_linked_list(&d, argc);
	
	// for testing
	printf("Start Stack a: ");
	print_link(d.stack_a);
	printf("Start Stack b: ");
	print_link(d.stack_b);
	test_operations(&d);
	printf("End Stack a: ");
	print_link(d.stack_a);
	printf("End Stack b: ");
	print_link(d.stack_b);
	printf("Stack_a len: %d, Stack_b len: %d\n", \
	ps_lstsize(d.stack_a), ps_lstsize(d.stack_b));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:54:08 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/28 20:28:52 by izaitcev      ########   odam.nl         */
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
	make_linked_list(&d, argc);
}

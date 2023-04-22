/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:54:08 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/22 13:35:01 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	d;

	d.input = NULL;
	if (argc < 2)
		return (0);
	parsing(&d, argc, argv);
}

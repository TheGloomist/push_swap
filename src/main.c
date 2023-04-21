/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:54:08 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/21 18:39:08 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data	d;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;

	parsing(&d, argc, argv);
	
}
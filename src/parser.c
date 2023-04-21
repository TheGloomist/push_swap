/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parser.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 18:29:05 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/22 01:29:52 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_characters(char to_check, char sign_check)
{
	if (ft_isdigit(to_check) == 1)
		return ;
	else if (to_check == '-' && ft_isdigit(sign_check) == 1)
		return ;
	else
	{
		ft_printf("Error\n");
		exit(0);		
	}
}

void	parsing(t_data *d, int argc, char **argv)
{
	int	y;
	int	x;

	y = 0;
	while (y < argc - 1)
	{
		x = 0;
		while (argv[1 + y][x] != '\0')
		{
			check_characters(argv[1 + y][x], argv[1 + y][x + 1]);
			x++;
		}
		y++;
	}
	d->input = (int *)malloc(sizeof(int) * (argc - 1));
	y = 0;
	while (y < argc - 1)
	{
		d->input[y] = ps_atoi(argv[1 + y]);
		y++;
	}
	for (int i = 0; i < argc - 1; i++)
		printf("%d ", d->input[i]);
}

// TODO : 
// [] - check for valid input
// [] - convert to ints
//
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parser.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 18:29:05 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/28 19:40:44 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_characters(t_data *d, char to_check, char sign_check)
{
	if (ft_isdigit(to_check) == 1)
		return ;
	else if (to_check == '-' && ft_isdigit(sign_check) == 1)
		return ;
	else
		exit_and_free(d);
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
			check_characters(argv[1 + y][x], argv[1 + y][x + 1], d);
			x++;
		}
		y++;
	}
	d->input = (int *)malloc(sizeof(int) * (argc - 1));
	if (d->input == NULL)
		exit_and_free(d);
	y = 0;
	while (y < argc - 1)
	{
		d->input[y] = ps_atoi(argv[1 + y], d);
		y++;
	}
	for (int i = 0; i < argc - 1; i++)
		printf("%d ", d->input[i]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parser.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/21 18:29:05 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/09 18:04:28 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_copy(t_data *d, int argc)
{
	int	i;
	int	sort;

	i = 0;
	while (i + 1 < (argc - 1))
	{
		if (d->sorted_input[i] > d->sorted_input[i + 1])
		{
			sort = d->sorted_input[i];
			d->sorted_input[i] = d->sorted_input[i + 1];
			d->sorted_input[i + 1] = sort;
			i = 0;
		}
		else if (d->sorted_input[i] == d->sorted_input[i + 1])
			exit_and_free(d);
		else
			i++;
	}
}

void	copy_input(t_data *d, int argc)
{
	int	i;

	d->sorted_input = (int *)malloc(sizeof(int) * (argc - 1));
	if (d->sorted_input == NULL)
		exit_and_free(d);
	i = 0;
	while (i < (argc - 1))
	{
		d->sorted_input[i] = d->input[i];
		i++;
	}
}

void	translate_input(t_data *d, int argc)
{
	int	i;
	int	j;

	copy_input(d, argc);
	sort_copy(d, argc);
	i = 0;
	while (i < (argc - 1))
	{
		j = 0;
		while (d->sorted_input[j] != d->input[i])
			j++;
		d->input[i] = j;
		i++;
	}
	free(d->sorted_input);
	d->sorted_input = NULL;
}

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
			check_characters(d, argv[1 + y][x], argv[1 + y][x + 1]);
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

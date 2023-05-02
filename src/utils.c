/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/22 01:20:25 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/02 19:05:25 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_linked_list(t_link *to_free)
{
	t_link	*temp;

	while (to_free != NULL)
	{
		temp = to_free->next;
		to_free->next = NULL;
		to_free->previous = NULL;
		free (to_free);
		to_free = temp;
	}
}

void	exit_and_free(t_data *d)
{
	free(d->input);
	d->input = NULL;
	free_linked_list(d->stack_a);
	free_linked_list(d->stack_b);
	ft_printf("Error\n");
	exit (0);
}

int	ps_atoi(const char *str, t_data *d)
{
	int			i;
	long int	sign;
	long int	conv;

	i = 0;
	sign = 1;
	conv = 0;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		conv = (conv * 10) + (str[i] - '0');
		if (conv * sign > INT_MAX || conv * sign < INT_MIN)
			exit_and_free(d);
		i++;
	}
	return ((int)conv * sign);
}

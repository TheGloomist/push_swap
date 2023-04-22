/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/22 01:20:25 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/22 13:39:02 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_atoi(const char *str)
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
		{
			ft_printf("Error\n");
			exit(0);
		}
		i++;
	}
	return ((int)conv * sign);
}

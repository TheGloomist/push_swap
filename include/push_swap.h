/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:53:58 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/28 19:40:19 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*previous;
}	t_list;

typedef struct s_data
{
	int		*input;
	t_list	*stack_a;
	t_list	*stack_b;
}	t_data;

int		main(int argc, char **argv);
void	parsing(t_data *d, int argc, char **argv);
int		ps_atoi(const char *str, t_data *d);
void	exit_and_free(t_data *d);

#endif

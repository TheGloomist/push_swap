/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:53:58 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/22 01:30:09 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

// typedef	struct s_list
// {
// 	void			*content;
// 	struct s_list 	*next;
// }	t_list;

typedef struct s_data
{
	int	*input;
}	t_data;

int	main(int argc, char **argv);
void	parsing(t_data *d, int argc, char **argv);
int	ps_atoi(const char *str);

#endif

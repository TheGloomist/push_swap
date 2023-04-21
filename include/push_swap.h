/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:53:58 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/21 18:38:04 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP
# include <stdlib.h>

typedef	struct s_list
{
	void			*content;
	struct s_list 	*next;
}	t_list;

typedef struct s_data
{
	int	*input;
}	t_data;

#endif

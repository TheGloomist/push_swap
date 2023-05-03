/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/15 15:53:58 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/03 15:18:39 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>
# include "libft.h"

typedef struct s_link
{
	int				content;
	struct s_link	*next;
	struct s_link	*previous;
}	t_link;

typedef struct s_data
{
	int		*input;
	t_link	*stack_a;
	t_link	*stack_b;
}	t_data;

int		main(int argc, char **argv);
void	parsing(t_data *d, int argc, char **argv);
int		ps_atoi(const char *str, t_data *d);
void	exit_and_free(t_data *d);
void	make_linked_list(t_data *d, int argc);
t_link	*ps_lstlast(t_link *lst);
int		ps_lstsize(t_link *lst);
void	pa(t_data *d);
void	pb(t_data *d);
void	sa(t_data *d);
void	sb(t_data *d);
void	sb(t_data *d);
void	ra(t_data *d);
void	rb(t_data *d);
void	rr(t_data *d);
void	rra(t_data *d);
void	rrb(t_data *d);
void	rrr(t_data *d);
void	swap_op(t_link **to_swap);

// things below are for testing only, REMOVE before handing in

void	print_link(t_link *to_print);
void	test_operations(t_data *d);

#endif

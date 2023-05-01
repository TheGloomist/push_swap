/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   linked_lists.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/28 18:44:40 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/04/29 17:40:42 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ps_lstnew(t_data *d, int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		exit_and_free(d);
	new->content = content;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}

void	ps_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
		new->previous = last;
	}
}

void	make_linked_lists(t_data *d, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ps_lstadd_back(&d->stack_a, ps_lstnew(d, d->input[i]));
		i++;
	}
}
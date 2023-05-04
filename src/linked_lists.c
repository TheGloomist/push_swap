/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   linked_lists.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: izaitcev <izaitcev@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/04/28 18:44:40 by izaitcev      #+#    #+#                 */
/*   Updated: 2023/05/04 13:47:32 by izaitcev      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_lstsize(t_link *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

t_link	*ps_lstlast(t_link *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

t_link	*ps_lstnew(t_data *d, int content)
{
	t_link	*new;

	new = (t_link *)malloc(sizeof(t_link));
	if (new == NULL)
		exit_and_free(d);
	new->content = content;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}

void	ps_lstadd_back(t_link **lst, t_link *new)
{
	t_link	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ps_lstlast(*lst);
		last->next = new;
		new->previous = last;
	}
}

void	make_linked_list(t_data *d, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ps_lstadd_back(&d->stack_a, ps_lstnew(d, d->input[i]));
		i++;
	}
}

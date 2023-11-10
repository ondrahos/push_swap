/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_innit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:46:36 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:53:21 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*get_list_before_bottom(t_list *list)
{
	while (list && list->next && list->next->next)
		list = list->next;
	return (list);
}

t_list	*get_list_bottom(t_list *list)
{
	while (list->next)
		list = list->next;
	return (list);
}

void	list_add_bottom(t_list **list, t_list *new)
{
	t_list	*tail;

	if (!new)
		return ;
	if (!*list)
	{
		*list = new;
		return ;
	}
	tail = get_list_bottom(*list);
	tail->next = new;
}

static t_list	*list_new(int num)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->num = num;
	new->index = 0;
	new->next = NULL;
	return (new);
}

t_list	*fill_list(char **stack)
{
	t_list		*a;
	long int	num;
	int			i;

	a = NULL;
	i = 1;
	while (stack[i])
	{
		num = ft_atoi(stack[i]);
		if (i == 0)
			a = list_new((int)num);
		else
			list_add_bottom(&a, list_new((int)num));
		i++;
	}
	return (a);
}

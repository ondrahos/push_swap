/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:17:01 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:53:51 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_list *list)
{
	int	size;

	if (!list)
		return (0);
	size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	return (size);
}

int	is_sorted(t_list *list)
{
	while (list->next)
	{
		if (list->num < list->next->num)
			list = list->next;
		else
			return (0);
	}
	return (1);
}

void	assign_index(t_list *a, int size)
{
	t_list	*ptr;
	t_list	*highest;
	int		value;

	while (--size > 0)
	{
		ptr = a;
		value = INT_MIN;
		highest = NULL;
		while (ptr)
		{
			if (ptr->num == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->num > value && ptr->index == 0)
			{
				value = ptr->num;
				highest = ptr;
				ptr = a;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->index = size;
	}
}

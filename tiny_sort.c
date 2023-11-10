/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:12 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/08 12:37:10 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_smallest(t_list *list)
{
	int	num;

	num = list->num;
	while (list)
	{
		if (list->num < num)
			num = list->num;
		list = list->next;
	}
	return (num);
}

int	find_highest(t_list *list)
{
	int	num;

	num = list->num;
	while (list)
	{
		if (list->num > num)
			num = list->num;
		list = list->next;
	}
	return (num);
}

void	tiny_sort(t_list **list)
{
	int	highest;

	if (is_sorted(*list))
		return ;
	highest = find_highest(*list);
	if ((*list)->num == highest)
		do_ra(list);
	else if ((*list)->next->num == highest)
		do_rra(list);
	if ((*list)->num > (*list)->next->num)
		do_sa(list);
}

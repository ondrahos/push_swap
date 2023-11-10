/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:22:24 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:55:05 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_rotate_direction(t_list *list)
{
	int	smallest;
	int	smallest_index;
	int	size;

	smallest_index = 0;
	smallest = INT_MAX;
	size = list_size(list) / 2;
	while (list)
	{
		if (list->num < smallest)
		{
			smallest = list->num;
			smallest_index = list->index;
		}
		list = list->next;
	}
	if (smallest_index < size)
		return (1);
	else
		return (0);
}

void	sort_four_to_five(t_list **a, t_list **b)
{
	int	smallest;
	int	rotate_direction;

	while (list_size(*a) > 3)
	{
		smallest = find_smallest(*a);
		rotate_direction = get_rotate_direction(*a);
		while ((*a)->num != smallest)
		{
			if (rotate_direction == 1)
				do_ra(a);
			else
				do_rra(a);
		}
		do_pb(a, b);
	}
	tiny_sort(a);
	while (list_size(*b))
		do_pa(a, b);
}

void	radix_sort(t_list **a, t_list **b)
{
	int	count;
	int	a_size;
	int	bit_pos;

	a_size = list_size(*a);
	bit_pos = 1;
	while (!is_sorted(*a))
	{
		count = 0;
		while (*a && count++ < a_size)
		{
			if (((*a)->index & bit_pos) == 0)
				do_pb(a, b);
			else
				do_ra(a);
		}
		while (*b)
			do_pa(a, b);
		bit_pos *= 2;
	}
}

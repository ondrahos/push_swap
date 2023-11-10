/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:51:45 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/03 12:35:02 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_rra(t_list **a)
{
	rev_rotate(a);
	ft_putstr("rra\n");
}

void	do_rrb(t_list **b)
{
	rev_rotate(b);
	ft_putstr("rrb\n");
}

void	do_rrr(t_list **a, t_list **b)
{
	rev_rotate(a);
	rev_rotate(b);
	ft_putstr("rra\n");
}

void	rev_rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*tail;
	t_list	*before_tail;

	tmp = *list;
	tail = get_list_bottom(*list);
	before_tail = get_list_before_bottom(*list);
	*list = tail;
	(*list)->next = tmp;
	before_tail->next = NULL;
}

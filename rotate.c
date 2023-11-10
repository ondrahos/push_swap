/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:51:30 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/08 13:52:35 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_ra(t_list **a)
{
	rotate(a);
	ft_putstr("ra\n");
}

void	do_rb(t_list **b)
{
	rotate(b);
	ft_putstr("rb\n");
}

void	do_rr(t_list **a, t_list **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}

void	rotate(t_list **list)
{
	t_list	*tmp;
	t_list	*tail;

	tmp = *list;
	*list = (*list)->next;
	tail = get_list_bottom(*list);
	tmp->next = NULL;
	tail->next = tmp;
}

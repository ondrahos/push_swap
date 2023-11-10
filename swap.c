/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:17:16 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/08 13:52:52 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_sa(t_list **a)
{
	swap(a);
	ft_putstr("sa\n");
}

void	do_sb(t_list **b)
{
	swap(b);
	ft_putstr("sb\n");
}

void	do_ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
	ft_putstr("ss\n");
}

void	swap(t_list **list)
{
	t_list	*tmp;

	if (!list || !(*list) || !(*list)->next)
		return ;
	tmp = (*list)->next;
	(*list)->next = tmp->next;
	tmp->next = *list;
	*list = tmp;
}

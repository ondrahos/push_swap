/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:25:50 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/08 13:52:18 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_pa(t_list **a, t_list **b)
{
	push(b, a);
	ft_putstr("pa\n");
}

void	do_pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_putstr("pb\n");
}

void	push(t_list **src, t_list **dst)
{
	t_list	*tmp;

	if (*src == NULL)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

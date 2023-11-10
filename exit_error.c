/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:17:31 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/03 12:39:23 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(t_list **a, t_list **b)
{
	free_list(a);
	free_list(b);
	write(2, "Error\n", 6);
	exit (1);
}

void	free_list(t_list **list)
{
	t_list	*tmp;

	if (!list || !(*list))
		return ;
	while (*list)
	{
		tmp = (*list)->next;
		free(*list);
		*list = tmp;
	}
	*list = NULL;
}

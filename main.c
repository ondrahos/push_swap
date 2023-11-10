/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:55:07 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:54:07 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **a, t_list **b)
{
	int	size;

	size = list_size(*a);
	if (size == 2)
		do_sa(a);
	else if (size == 3)
		tiny_sort(a);
	else if (size >= 4 && size <= 5)
		sort_four_to_five(a, b);
	else if (size > 6)
		radix_sort(a, b);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc < 3)
		return (0);
	if (!check_args(argv))
		exit_error(&a, &b);
	a = fill_list(argv);
	if (is_sorted(a))
		return (free_list(&a), free_list(&b), 0);
	assign_index(a, list_size(a) + 1);
	push_swap(&a, &b);
	free_list(&a);
	free_list(&b);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:08:15 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:36:44 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(int num, char **args, int i)
{
	i++;
	while (args[i] != NULL)
	{
		if (ft_atoi(args[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	is_num(char *num)
{
	int	i;

	i = 0;
	if (num[i] == '-')
		i++;
	while (num[i] != '\0')
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_args(char **argv)
{
	int		i;
	long	tmp;

	i = 1;
	while (argv[i] != NULL)
	{
		tmp = ft_atoi(argv[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (0);
		if (!is_num(argv[i]))
			return (0);
		if (is_duplicate(tmp, argv, i))
			return (0);
		i++;
	}
	return (1);
}

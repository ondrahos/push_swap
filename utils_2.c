/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:22:25 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:55:48 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	s_len;

	if (!s)
		return (NULL);
	new_str = NULL;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (s_len - start < len)
		len = s_len - start;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < s_len && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

char	*join_args(char **argv)
{
	char	*tmp;
	char	*str;
	int		i;

	i = 1;
	str = ft_strdup("");
	while (argv[i])
	{
		tmp = ft_strjoin(str, argv[i]);
		free(str);
		if (argv[i + 1] == NULL)
			str = ft_strdup(tmp);
		else
			str = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	return (str);
}

void	free_split(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

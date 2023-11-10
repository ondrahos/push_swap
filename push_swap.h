/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohosnedl <ohosnedl@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:58:42 by ohosnedl          #+#    #+#             */
/*   Updated: 2023/11/10 12:56:11 by ohosnedl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_list
{
	int				num;
	int				index;
	struct s_list	*next;
}	t_list;

void	exit_error(t_list **a, t_list **b);
void	free_list(t_list **list);
t_list	*fill_list(char **stack);
void	assign_index(t_list *a, int size);
int		is_sorted(t_list *list);
int		list_size(t_list *list);
void	do_pa(t_list **a, t_list **b);
void	do_pb(t_list **a, t_list **b);
void	do_rr(t_list **a, t_list **b);
void	do_rb(t_list **b);
void	do_ra(t_list **a);
void	radix_sort(t_list **a, t_list **b);
void	sort_four_to_five(t_list **a, t_list **b);
char	**ft_split(char const *s, char c);
void	do_ss(t_list **a, t_list **b);
void	do_sb(t_list **b);
void	do_sa(t_list **a);
void	tiny_sort(t_list **list);
int		find_highest(t_list *list);
int		find_smallest(t_list *list);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*join_args(char **argv);
long	ft_atoi(const char *str);
void	push(t_list **src, t_list **dst);
void	rotate(t_list **list);
void	swap(t_list **list);
void	ft_putstr(char *str);
void	list_add_bottom(t_list **list, t_list *new);
t_list	*get_list_bottom(t_list *list);
void	rev_rotate(t_list **list);
void	do_rrr(t_list **a, t_list **b);
void	do_rrb(t_list **b);
void	do_rra(t_list **a);
t_list	*get_list_before_bottom(t_list *list);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	free_split(char **args);
int		ft_isdigit(int c);
int		check_args(char **argv);
int		is_duplicate(int num, char **args, int i);
int		is_num(char *num);

#endif

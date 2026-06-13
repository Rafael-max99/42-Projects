/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:58 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:29:59 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*head;
	int		size;
}	t_stack;

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

int		ft_swap(t_stack *stack);
int		ft_push(t_stack *src, t_stack *dst);
int		ft_rotate(t_stack *stack);
int		ft_reverse_rotate(t_stack *stack);

long	ft_atol(const char *str);

void	ft_build_stack(t_stack *stack, int *values, int size);
t_node	*ft_create_node(int n);
void	ft_error(void);
void	ft_free_split(char **split);

int		ft_has_duplicate(int *arr, int size);
int		ft_is_number(char *str);

char	*ft_join_args(int argc, char *argv[]);
void	ft_parse(t_stack *stack, int argc, char *argv[]);

char	**ft_split(char const *str, char c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *str1, char const *str2);

int		ft_strlen(const char *str);
int		ft_count_words(const char *str, char delimiter);
int		ft_word_length(const char *str, char delimiter);

void	ft_radix_sort(t_stack *a, t_stack *b);
int		ft_get_max_bits(t_stack *stack);

int		ft_is_sorted(t_stack *stack);
void	ft_sort_3(t_stack *stack);
void	ft_sort_5(t_stack *a, t_stack *b);
void	ft_sort_stack(t_stack *a, t_stack *b);

void	ft_sort_array(int *array, int size);
void	ft_index_stack(t_stack *stack, int *array);

int		*ft_create_array(t_stack *stack);
void	ft_free_stack(t_stack *stack);

#endif
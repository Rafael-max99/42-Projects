/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:09:51 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:09:51 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_find_min_pos(t_stack *stack)
{
	int		min;
	int		pos;
	int		i;
	t_node	*temp;

	min = stack->head->data;
	pos = 0;
	i = 0;
	temp = stack->head;
	while (temp)
	{
		if (temp->data < min)
		{
			min = temp->data;
			pos = i;
		}
		temp = temp->next;
		i++;
	}
	return (pos);
}

static void	ft_push_min_to_b(t_stack *a, t_stack *b)
{
	int	pos;

	pos = ft_find_min_pos(a);
	if (pos <= a->size / 2)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		pos = a->size - pos;
		while (pos-- > 0)
			rra(a);
	}
	pb(a, b);
}

void	ft_sort_5(t_stack *a, t_stack *b)
{
	while (a->size > 3)
		ft_push_min_to_b(a, b);
	ft_sort_3(a);
	while (b->head)
		pa(a, b);
}

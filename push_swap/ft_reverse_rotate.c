/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:09:28 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:09:29 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_reverse_rotate(t_stack *stack)
{
	t_node	*temp;
	t_node	*end;

	if (!stack || !stack->head || !stack->head->next)
		return (0);
	temp = stack->head;
	while (temp->next->next)
		temp = temp->next;
	end = temp->next;
	temp->next = NULL;
	end->next = stack->head;
	stack->head = end;
	return (1);
}

void	rra(t_stack *a)
{
	if (ft_reverse_rotate(a))
		write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	if (ft_reverse_rotate(b))
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	int	reversed_a;
	int	reversed_b;

	reversed_a = ft_reverse_rotate(a);
	reversed_b = ft_reverse_rotate(b);
	if (reversed_a && reversed_b)
		write(1, "rrr\n", 4);
}

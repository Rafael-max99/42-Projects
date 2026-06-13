/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:09:37 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:09:38 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_stack *stack)
{
	t_node	*temp;
	t_node	*end;

	if (!stack || !stack->head || !stack->head->next)
		return (0);
	temp = stack->head;
	end = stack->head;
	while (end->next)
		end = end->next;
	stack->head = temp->next;
	end->next = temp;
	temp->next = NULL;
	return (1);
}

void	ra(t_stack *a)
{
	if (ft_rotate(a))
		write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	if (ft_rotate(b))
		write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	int	rotated_a;
	int	rotated_b;

	rotated_a = ft_rotate(a);
	rotated_b = ft_rotate(b);
	if (rotated_a && rotated_b)
		write(1, "rr\n", 3);
}

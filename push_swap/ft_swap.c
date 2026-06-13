/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:38 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:39 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack *stack)
{
	int	temp;

	if (!stack || !stack->head || !stack->head->next)
		return (0);
	temp = stack->head->data;
	stack->head->data = stack->head->next->data;
	stack->head->next->data = temp;
	return (1);
}

void	sa(t_stack *a)
{
	if (ft_swap(a))
		write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	if (ft_swap(b))
		write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	int	swapped_a;
	int	swapped_b;

	swapped_a = ft_swap(a);
	swapped_b = ft_swap(b);
	if (swapped_a && swapped_b)
		write(1, "ss\n", 3);
}

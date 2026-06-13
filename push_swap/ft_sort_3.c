/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:09:43 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:09:43 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_3_cases(t_stack *stack, int first, int second, int third)
{
	if (first > second && second > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (first < second && second > third && first < third)
	{
		sa(stack);
		ra(stack);
	}
}

void	ft_sort_3(t_stack *stack)
{
	int	first;
	int	second;
	int	third;

	if (stack->size != 3)
		return ;
	first = stack->head->data;
	second = stack->head->next->data;
	third = stack->head->next->next->data;
	if (first < second && second < third)
		return ;
	else if (first > second && second < third && first < third)
		sa(stack);
	else if (first > second && second < third && first > third)
		ra(stack);
	else if (first < second && second > third && first > third)
		rra(stack);
	else
		ft_sort_3_cases(stack, first, second, third);
}

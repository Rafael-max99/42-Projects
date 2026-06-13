/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:06:36 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:06:36 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_build_stack(t_stack *stack, int *values, int size)
{
	int			pos;
	t_node		*new;
	t_node		*last;

	pos = 0;
	last = NULL;
	stack->head = NULL;
	stack->size = size;
	while (pos < size)
	{
		new = ft_create_node(values[pos]);
		if (!last)
			stack->head = new;
		else
			last->next = new;
		last = new;
		pos++;
	}
}

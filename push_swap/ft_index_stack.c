/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:08:10 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:08:10 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_stack(t_stack *stack, int *array)
{
	int		pos;
	t_node	*current;

	current = stack->head;
	while (current)
	{
		pos = 0;
		while (pos < stack->size)
		{
			if (current->data == array[pos])
			{
				current->data = pos;
				break ;
			}
			pos++;
		}
		current = current->next;
	}
}

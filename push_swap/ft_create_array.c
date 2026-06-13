/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:07:18 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:07:18 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_create_array(t_stack *stack)
{
	int		*array;
	int		pos;
	t_node	*current;

	if (!stack || stack->size == 0)
		return (NULL);
	array = malloc(sizeof(int) * stack->size);
	if (!array)
		return (NULL);
	current = stack->head;
	pos = 0;
	while (current)
	{
		array[pos] = current->data;
		current = current->next;
		pos++;
	}
	return (array);
}

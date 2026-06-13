/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:07:50 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:07:50 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*temp;

	if (!stack)
		return ;
	current = stack->head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	stack->head = NULL;
	stack->size = 0;
}

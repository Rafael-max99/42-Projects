/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:07:55 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:07:55 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_max_bits(t_stack *stack)
{
	int		max_num;
	int		max_bits;
	t_node	*current;

	if (!stack || !stack->head)
		return (0);
	current = stack->head;
	max_num = current->data;
	max_bits = 0;
	while (current)
	{
		if (current->data > max_num)
			max_num = current->data;
		current = current->next;
	}
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

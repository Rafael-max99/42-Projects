/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:08:52 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:08:53 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_push(t_stack *src, t_stack *dst)
{
	t_node	*temp;

	if (!src || !src->head)
		return (0);
	temp = src->head;
	src->head = src->head->next;
	temp->next = dst->head;
	dst->head = temp;
	src->size--;
	dst->size++;
	return (1);
}

void	pa(t_stack *a, t_stack *b)
{
	if (ft_push(b, a))
		write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if (ft_push(a, b))
		write(1, "pb\n", 3);
}

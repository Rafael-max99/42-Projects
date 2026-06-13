/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:09:08 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:09:08 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_radix_sort(t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	i = 0;
	size = a->size;
	max_bits = ft_get_max_bits(a);
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (!a->head)
				return ;
			if (((a->head->data >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (b->head)
			pa(a, b);
		i++;
	}
}

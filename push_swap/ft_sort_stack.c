/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:04 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:04 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_radix_prepare(t_stack *a, t_stack *b)
{
	int	*array;

	array = ft_create_array(a);
	if (!array)
		ft_error();
	ft_sort_array(array, a->size);
	ft_index_stack(a, array);
	free(array);
	ft_radix_sort(a, b);
}

void	ft_sort_stack(t_stack *a, t_stack *b)
{
	if (ft_is_sorted(a))
		return ;
	if (a->size == 2)
	{
		if (a->head->data > a->head->next->data)
			sa(a);
		return ;
	}
	if (a->size == 3)
	{
		ft_sort_3(a);
		return ;
	}
	if (a->size <= 5)
	{
		ft_sort_5(a, b);
		return ;
	}
	ft_radix_prepare(a, b);
}

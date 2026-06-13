/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:51 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:52 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	a.head = NULL;
	a.size = 0;
	b.head = NULL;
	b.size = 0;
	ft_parse(&a, argc, argv);
	if (ft_is_sorted(&a))
	{
		ft_free_stack(&a);
		ft_free_stack(&b);
		return (0);
	}
	ft_sort_stack(&a, &b);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}

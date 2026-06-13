/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:08:16 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:08:16 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_number(char *str)
{
	int	pos;

	pos = 0;
	if (str[pos] == '-' || str[pos] == '+')
		pos++;
	if (!str[pos])
		return (0);
	while (str[pos])
	{
		if (str[pos] < '0' || str[pos] > '9')
			return (0);
		pos++;
	}
	return (1);
}

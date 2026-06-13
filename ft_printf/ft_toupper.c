/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:58:12 by rlauren           #+#    #+#             */
/*   Updated: 2025/12/04 19:14:41 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_toupper(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos])
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] -= 32;
		pos++;
	}
}

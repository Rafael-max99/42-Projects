/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_padding.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:57:45 by rlauren           #+#    #+#             */
/*   Updated: 2025/12/04 19:05:04 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_padding(int width, int n, char c)
{
	int	printed;

	printed = 0;
	while (width-- > n)
	{
		ft_putchar(c);
		printed++;
	}
	return (printed);
}

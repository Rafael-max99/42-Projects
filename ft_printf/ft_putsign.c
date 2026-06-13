/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsign.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:12:43 by rlauren           #+#    #+#             */
/*   Updated: 2025/12/04 19:29:39 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putsign(t_format *format)
{
	if ((*format).type.n < 0)
	{
		ft_putchar('-');
		return (1);
	}
	else if ((*format).flags.plus)
	{
		ft_putchar('+');
		return (1);
	}
	else if ((*format).flags.space)
	{
		ft_putchar(' ');
		return (1);
	}
	return (0);
}

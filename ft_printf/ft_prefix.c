/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 18:29:33 by rlauren           #+#    #+#             */
/*   Updated: 2025/12/04 19:29:26 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_prefix(char type, char *num_char)
{
	char	*str;

	str = malloc(3);
	if (!str)
		return (NULL);
	str[0] = '0';
	if (type == 'x')
		str[1] = 'x';
	else if (type == 'X')
	{
		str[1] = 'X';
		ft_toupper(num_char);
	}
	str[2] = '\0';
	return (str);
}

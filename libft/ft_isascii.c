/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:34:48 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:13:54 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	str[20] = "áíd334´´+\n\t";
	int		x;

	x = 0;
	while (str[x])
	{
		printf("%d\n", ft_isascii(str[x]));
		x++;
	}
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:23:15 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/09 13:10:17 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	x;
	int	signal;
	int	num;

	x = 0;
	signal = 1;
	num = 0;
	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			signal = -signal;
		x++;
	}
	while (str[x] && (str[x] >= '0' && str[x] <= '9'))
	{
		num = (num * 10) + (str[x] - '0');
		x++;
	}
	return (num * signal);
}
/*
int	main(void)
{
	char	*str;

	str = "   -+-+-+---++-2345ffd67";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:22:36 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:14:41 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	str[20] = "dasdsa444";
	int		x;

	x = 0;
	while (str[x])
	{
		printf("%d", ft_isdigit(str[x]));
		x++;
	}
	return (0);
}
}*/
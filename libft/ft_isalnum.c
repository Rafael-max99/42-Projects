/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:22:26 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:11:54 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	str[20] = "ola233gsd...ff6";
	int		x;

	x = 0;
	while (str[x])
	{
		printf("%d", ft_isalnum(str[x]));
		x++;
	}
	return (0);
}
*/
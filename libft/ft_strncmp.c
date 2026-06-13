/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:09:41 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/09 12:31:33 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	x;

	x = 0;
	if (num == 0)
		return (0);
	while ((x < num - 1) && str1[x] && str2[x] && (str1[x] == str2[x]))
		x++;
	return ((unsigned char)str1[x] - (unsigned char)str2[x]);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "ABCD";
	str2 = "ABCD";
	printf("%d", ft_strncmp(str1, str2, 5));
	return (0);
}
*/
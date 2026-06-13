/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:13:45 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:45:50 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				x;
	const unsigned char	*new_ptr1;
	const unsigned char	*new_ptr2;

	x = 0;
	new_ptr1 = (const unsigned char *)ptr1;
	new_ptr2 = (const unsigned char *)ptr2;
	while (x < num)
	{
		if (new_ptr1[x] != new_ptr2[x])
			return (new_ptr1[x] - new_ptr2[x]);
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	int		num;
	char	*str1;
	char	*str2;

	str1 = "ABCD";
	str2 = "ABCF";
	num = ft_memcmp(str1, str2, 4);
	printf("%d", num);
	return (0);
}
*/
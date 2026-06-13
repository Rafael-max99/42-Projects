/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:13:40 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/11 20:22:40 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t num)
{
	const unsigned char	*new_str;
	unsigned char		new_c;
	size_t				x;

	new_str = (const unsigned char *)str;
	new_c = (unsigned char)c;
	x = 0;
	while (x < num)
	{
		if (new_str[x] == new_c)
			return ((void *)(new_str + x));
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	arr[] = {1, 2, 3, 4, 5, 6};
	void	*ptr;

	ptr = ft_memchr(arr, 3, sizeof(arr));
	if(ptr)
		printf("%d in\n", *(unsigned char *)ptr);
	return (0);
}
*/
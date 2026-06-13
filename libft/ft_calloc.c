/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:24:46 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/09 16:26:22 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	size_t			x;

	if ((size != 0) && (num > (__SIZE_MAX__ / size)))
		return (NULL);
	if (num == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(size * num);
	if (!ptr)
		return (NULL);
	x = 0;
	while (x < (size * num))
	{
		ptr[x] = 0;
		x++;
	}
	return ((void *)ptr);
}
/*
int	main(void)
{
	int	*array;

	array = ft_calloc(5, sizeof(int));
	printf("%d", array[4]);
	free(array);
	return (0);
}
*/
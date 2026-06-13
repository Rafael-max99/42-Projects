/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:01:02 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:28:32 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			x;
	unsigned char	*ptr;

	x = 0;
	ptr = (unsigned char *)s;
	while (x < len)
	{
		ptr[x] = (unsigned char)c;
		x++;
	}
	return (s);
}
/*
int	main(void)
{
	char	buffer[20] = "Primeiro.";
	int	size = 5;

	printf("%s", buffer);
	ft_memset(buffer, 'X', size);
	printf("%s", buffer);
	return (0);
}*/

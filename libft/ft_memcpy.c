/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:05:39 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/09 15:09:31 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	const unsigned char	*new_src;

	if (!dest && !src)
		return (NULL);
	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
	while (n > 0)
	{
		*new_dest++ = *new_src++;
		n--;
	}
	return (dest);
}

/*
int	main(void)
{
	char	t[] = "polkij";
	char	str[] = "abcdefgh";
	int		n;

	ft_memcpy(str + 2, str, 5);
	n = sizeof(str) - 1;
	while (n >= 0)
	{
		printf("[%c]", str[n]);
		n--;
	}
	return (0);
}
*/
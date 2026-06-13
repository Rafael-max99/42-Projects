/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:08:56 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/09 15:11:05 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				size;
	unsigned char		*new_dest;
	const unsigned char	*new_src;

	if (!dest && !src)
		return (NULL);
	size = 0;
	new_dest = (unsigned char *)dest;
	new_src = (const unsigned char *)src;
	if (new_dest > new_src)
	{
		while ((n--) > 0)
			new_dest[n] = new_src[n];
	}
	else
	{
		while (size < n)
		{
			new_dest[size] = new_src[size];
			size++;
		}
	}
	return (dest);
}

/*

*/
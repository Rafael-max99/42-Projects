/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:44:06 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/09 14:41:34 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	x;

	x = 0;
	if (dest_size > 0)
	{
		while ((x < (dest_size - 1)) && src[x])
		{
			dest[x] = src[x];
			x++;
		}
		dest[x] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char	src[] = "abcdefghij";
	char	dest[] = "plokijh";

	printf("%s\n", dest);
	printf("%ld\n", ft_strlcpy(dest, src, 15));
	printf("%s\n", dest);
	return (0);
}*/
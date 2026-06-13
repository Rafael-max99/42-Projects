/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:09:29 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/09 14:11:30 by rlauren          ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t buffer_size)
{
	size_t	total_len;
	size_t	x;
	size_t	dest_size;
	size_t	src_size;

	src_size = ft_strlen(src);
	dest_size = 0;
	x = 0;
	while (dest[dest_size] && dest_size < buffer_size)
		dest_size++;
	total_len = dest_size + src_size;
	if (buffer_size <= dest_size)
		return (total_len);
	while ((dest_size < (buffer_size - 1)) && (src[x] != '\0'))
		dest[dest_size++] = src[x++];
	dest[dest_size] = '\0';
	return (total_len);
}
/*
int	main(void)
{
	char	dest[20] = "a";
	char	src[] = "lorem ipsum dolor sit amet";

	printf("%s\n", dest);
	printf("%ld\n", ft_strlcat(dest, src, sizeof(dest)));
	printf("%s\n ", dest);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:44:39 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/11 19:47:34 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
*/

/*
static void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*ptr;
	size_t			x;

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
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*subs;
	size_t	s_len;

	x = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (len > s_len - start)
		len = s_len - start;
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (x < len && s[start])
	{
		subs[x] = s[start];
		x++;
		start++;
	}
	subs[x] = '\0';
	return (subs);
}
/*
int	main(void)
{
	char	*str;

	str = "Rafael Lamego.";
	printf("%s", ft_substr(str, 4, 7));
	return (0);
}
*/
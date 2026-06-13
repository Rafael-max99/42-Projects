/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:44:08 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:45:51 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	ft_strlen(char const *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
*/

static int	ft_in_set(char c, char const *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == c)
			return (1);
		x++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	x = 0;
	y = ft_strlen(s1);
	z = 0;
	while (s1[x] && ft_in_set(s1[x], set))
		x++;
	while (y > x && ft_in_set(s1[y - 1], set))
		y--;
	result = malloc(sizeof(char) * (y - x + 1));
	if (!result)
		return (NULL);
	while (x < y)
		result[z++] = s1[x++];
	result[z] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*str = "rafaell";
	char	*set = "l";

	printf("%s", ft_strtrim(str, set));
	return (0);
}*/
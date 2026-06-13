/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:43:54 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/27 20:22:24 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_counter(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		if (s[x])
		{
			count++;
			while (s[x] && s[x] != c)
				x++;
		}
	}
	return (count);
}

static size_t	ft_word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	ft_free(char **arr, int y)
{
	while (y > 0)
		free(arr[--y]);
	free(arr);
}

static char	**ft_logic(char const *s, char c, char **arr_strs)
{
	size_t	x;
	size_t	y;
	size_t	len;

	x = 0;
	y = 0;
	while (s[x])
	{
		while (s[x] == c)
			x++;
		if (s[x])
		{
			len = ft_word_len(&s[x], c);
			arr_strs[y] = ft_substr(s, x, len);
			if (!arr_strs[y++])
				return (ft_free(arr_strs, y), NULL);
			x += len;
		}
	}
	arr_strs[y] = (NULL);
	return (arr_strs);
}

char	**ft_split(char const *s, char c)
{
	char	**arr_strs;

	if (!s)
		return (NULL);
	arr_strs = malloc(sizeof(char *) * (ft_word_counter(s, c) + 1));
	if (!arr_strs)
		return (NULL);
	return (ft_logic(s, c, arr_strs));
}
/*
int	main(void)
{
	char	*str;
	char	c;
	char	**arrays;
	int		x;

	str = "42 lisbon school .";
	c = ' ';
	x = 0;
	arrays = ft_split(str, c);
	while (arrays[x])
	{
		printf("%s\n", arrays[x]);
		x++;
	}
	x = 0;
	while (arrays[x])
		free(arrays[x++]);
	free(arrays);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:44:18 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:32:28 by rlauren          ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*final_s;
	size_t	x;
	size_t	y;
	size_t	first_part;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	x = 0;
	y = 0;
	first_part = ft_strlen(s1);
	final_s = malloc(sizeof(char) * total_len);
	if (!final_s)
		return (NULL);
	while (x < total_len - 1)
	{
		if (x < first_part)
			final_s[x] = s1[x];
		else
		{
			final_s[x] = s2[y++];
		}
		x++;
	}
	final_s[x] = '\0';
	return (final_s);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "Rafael";
	s2 = "Lamego";
	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	return (0);
}
*/
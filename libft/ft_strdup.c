/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:28:48 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:30:38 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}
*/

char	*ft_strdup(const char *str)
{
	size_t	x;
	char	*copy;

	copy = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!copy)
		return (NULL);
	x = 0;
	while (str[x])
	{
		copy[x] = str[x];
		x++;
	}
	copy[x] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*str;
	char	*copy;

	str = "Rafael";
	copy = ft_strdup(str);
	printf("%s", copy);
	free(copy);
	return (0);
}
*/
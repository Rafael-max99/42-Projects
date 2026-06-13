/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:09:49 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/11 20:17:32 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*new_str;
	char	new_c;
	char	*temp;

	new_str = (char *)str;
	new_c = (char)c;
	temp = NULL;
	while (*new_str)
	{
		if (*new_str == new_c)
			temp = new_str;
		new_str++;
	}
	if (!new_c)
		return (new_str);
	if (!temp)
		return (NULL);
	return (temp);
}
/*
int	main(void)
{
	char	str[] = "abcdefgfifsdd";
	char	c;

	c = 'f';
	printf("%s\n", str);
	printf("%s\n", ft_strrchr(str, c));
	return (0);
}
*/
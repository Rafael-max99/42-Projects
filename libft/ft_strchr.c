/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:31:59 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/11 20:18:31 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*new_str;
	char	new_c;

	new_str = (char *)str;
	new_c = (char)c;
	while (*new_str)
	{
		if (*new_str == new_c)
			return (new_str);
		new_str++;
	}
	if (!new_c)
		return (new_str);
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "abcdefegh";
	char	c;

	c = 'e';
	printf("%c\n", c);
	printf("%s\n", str);
	printf("%s\n", ft_strchr(str, c));
	return (0);
}
*/

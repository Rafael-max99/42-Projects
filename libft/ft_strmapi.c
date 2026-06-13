/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:43:34 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/11 19:45:24 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static char	ft_change_char(unsigned int index, char c)
{
	return (index + c);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	x;
	char	*str;
	size_t	size;

	if (!s || !f)
		return (NULL);
	x = 0;
	size = ft_strlen(s);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (s[x])
	{
		str[x] = (*f)(x, s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
/*
int	main(void)
{
	char	*str_final;
	char	*str;

	str = "ABCD";
	str_final = ft_strmapi(str, ft_change_char);
	printf("%s", str_final);
	free(str_final);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:46:11 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:31:47 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	ft_iterate(unsigned int n, char *str)
{
	*str = n + *str;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	x;

	if (!s || !f)
		return ;
	x = 0;
	while (s[x])
	{
		f(x, &s[x]);
		x++;
	}
}
/*
int	main(void)
{
	char	str[] = "abcd";

	printf("%s\n", str);
	ft_striteri(str, ft_iterate);
	printf("%s\n", str);
	return (0);
}
*/
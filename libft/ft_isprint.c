/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:44:37 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/09 13:31:26 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main(void)
{
	char	str[20] = "asdas\n\tfdf\t";
	int		x;

	x = 0;
	while (str[x])
	{
		printf("%d", ft_isprint(str[x]));
		x++;
	}
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:22:32 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:13:02 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	z;

	x = 1;
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			z = ft_isalpha(argv[x][y]);
			printf("%d", z);
			y++;
		}
		printf("\n");
		x++;
	}
	return (0);
}
*/
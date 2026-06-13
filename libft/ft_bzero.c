/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:03:39 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/09 14:41:03 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			n_bytes;
	unsigned char	*ptr;

	n_bytes = 0;
	ptr = (unsigned char *)s;
	while (n_bytes < n)
		ptr[n_bytes++] = 0;
}

/*
int	main(void)
{
	char	str[] = "abcdefgh";
	int		x;

	x = 0;
	printf("%s\n", str);
	ft_bzero(str, 5);
	printf("%s\n", str);
	while (x < 8)
		printf("[%d]", str[x++]);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:43:41 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/27 20:22:05 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_size(long n)
{
	int	size;

	if (n <= 0)
		size = 1;
	else
		size = 0;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*num_char;
	int		num_size;
	long	nb;

	nb = n;
	num_size = ft_num_size(nb);
	num_char = malloc(sizeof(char) * (num_size + 1));
	if (!num_char)
		return (NULL);
	num_char[num_size] = '\0';
	if (nb == 0)
		num_char[0] = '0';
	if (nb < 0)
	{
		num_char[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		num_char[--num_size] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (num_char);
}
/*
int	main(void)
{
	int		num;
	char	*str;

	num = 3456;
	str = ft_itoa(num);
	printf("%s", str);
	return (0);
}
*/

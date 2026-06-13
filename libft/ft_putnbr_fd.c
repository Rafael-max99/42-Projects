/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:50:42 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:58:52 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		x;
	long	nb;
	char	num_char[20];

	x = 0;
	nb = n;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		num_char[x++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (x-- > 0)
		write(fd, &num_char[x], 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(-2345, 1);
	return (0);
}
*/
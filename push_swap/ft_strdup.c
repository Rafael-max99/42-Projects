/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:17 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:17 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *str)
{
	char		*dup;
	size_t		len;
	size_t		pos;

	len = 0;
	while (str[len])
		len++;
	dup = malloc(len + 1);
	if (!dup)
		return (ft_error(), NULL);
	pos = 0;
	while (pos < len)
	{
		dup[pos] = str[pos];
		pos++;
	}
	dup[pos] = '\0';
	return (dup);
}

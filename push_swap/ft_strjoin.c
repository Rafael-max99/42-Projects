/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:23 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:23 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char		*result;
	size_t		count;
	size_t		pos;

	if (!str1 || !str2)
		return (NULL);
	result = malloc(sizeof(char) * ((ft_strlen(str1) + ft_strlen(str2) + 1)));
	if (!result)
		return (ft_error(), NULL);
	count = 0;
	while (str1[count])
	{
		result[count] = str1[count];
		count++;
	}
	pos = 0;
	while (str2[pos])
	{
		result[count + pos] = str2[pos];
		pos++;
	}
	result[count + pos] = '\0';
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:44 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:44 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_word_length(const char *str, char delimiter)
{
	int	length;

	length = 0;
	while (str[length] && str[length] != delimiter)
		length++;
	return (length);
}

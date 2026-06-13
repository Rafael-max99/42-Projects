/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:10:10 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:10:10 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*ft_get_word(const char *str, char c, int *pos)
{
	char	*word;
	int		i;
	int		start;

	start = *pos;
	i = 0;
	while (str[*pos] && str[*pos] != c)
		(*pos)++;
	word = malloc(sizeof(char) * (*pos - start + 1));
	if (!word)
		return (NULL);
	while (start < *pos)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *str, char c)
{
	char	**result;
	int		pos;
	int		lines;

	if (!str)
		ft_error();
	result = malloc(sizeof(char *) * (ft_count_words(str, c) + 1));
	if (!result)
		return (ft_error(), NULL);
	pos = 0;
	lines = 0;
	while (str[pos])
	{
		while (str[pos] == c)
			pos++;
		if (str[pos])
		{
			result[lines] = ft_get_word(str, c, &pos);
			if (!result[lines])
				return (ft_free_split(result), ft_error(), NULL);
			lines++;
		}
	}
	result[lines] = NULL;
	return (result);
}

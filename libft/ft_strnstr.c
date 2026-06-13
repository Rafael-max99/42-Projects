/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 21:31:25 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:45:00 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *text, const char *word, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (!*word)
		return ((char *)text);
	while (text[x] && x < len)
	{
		if (text[x] == word[0])
		{
			y = 0;
			while (word[y] && ((x + y) < len) && (text[x + y] == word[y]))
				y++;
			if (word[y] == '\0')
				return ((char *)&text[x]);
		}
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*phrase;
	char	*word;
	char	*new_phrase;

	phrase = "42 lisbon school.";
	word = "lisbon";
	printf("%s\n", phrase);
	new_phrase = ft_strnstr(phrase, word, 20);
	printf("%s\n", word);
	printf("%s\n", new_phrase);
	return (0);
}
*/
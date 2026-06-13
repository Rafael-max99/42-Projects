/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:20:43 by marvin            #+#    #+#             */
/*   Updated: 2026/01/19 19:43:11 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_newline(char *stash)
{
	if (!stash)
		return (0);
	while (*stash)
	{
		if (*stash == '\n')
			return (1);
		stash++;
	}
	return (0);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char *stash, char *buffer)
{
	size_t	stash_len;
	size_t	buffer_len;
	char	*new_stash;
	size_t	size;

	if (!stash)
	{
		stash = malloc(1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	size = -1;
	stash_len = ft_strlen(stash);
	buffer_len = ft_strlen(buffer);
	new_stash = malloc(stash_len + buffer_len + 1);
	if (!new_stash)
		return (free(stash), NULL);
	while (++size < stash_len)
		new_stash[size] = stash[size];
	size = -1;
	while (++size < buffer_len)
		new_stash[size + stash_len] = buffer[size];
	new_stash[stash_len + buffer_len] = '\0';
	return (free(stash), new_stash);
}

char	*ft_getline(char *stash)
{
	size_t	pos;
	size_t	count;
	char	*line;

	if (!stash)
		return (NULL);
	pos = 0;
	count = 0;
	while (stash[count] && stash[count] != '\n')
		count++;
	if (stash[count])
		count++;
	line = malloc(count + 1);
	if (!line)
		return (NULL);
	while (pos < count)
	{
		line[pos] = stash[pos];
		pos++;
	}
	line[pos] = '\0';
	return (line);
}

char	*ft_update_stash(char *stash)
{
	char	*new_stash;
	size_t	new_pos;
	size_t	pos;

	if (!stash)
		return (NULL);
	new_pos = 0;
	pos = 0;
	while (stash[pos] && stash[pos] != '\n')
		pos++;
	if (stash[pos] == '\n')
		pos++;
	if (!stash[pos])
		return (free(stash), NULL);
	while (stash[pos + new_pos])
		new_pos++;
	new_stash = malloc(new_pos + 1);
	if (!new_stash)
		return (free(stash), NULL);
	new_pos = 0;
	while (stash[pos])
		new_stash[new_pos++] = stash[pos++];
	new_stash[new_pos] = '\0';
	return (free(stash), new_stash);
}

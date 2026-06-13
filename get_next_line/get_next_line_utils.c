/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:20:46 by marvin            #+#    #+#             */
/*   Updated: 2026/01/19 19:42:57 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char	*str)
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
	size_t	pos;
	char	*new_stash;

	if (!stash)
	{
		stash = malloc(1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	pos = -1;
	stash_len = ft_strlen(stash);
	buffer_len = ft_strlen(buffer);
	new_stash = malloc(stash_len + buffer_len + 1);
	if (!new_stash)
		return (free(stash), NULL);
	while (++pos < stash_len)
		new_stash[pos] = stash[pos];
	pos = -1;
	while (++pos < buffer_len)
		new_stash[pos + stash_len] = buffer[pos];
	new_stash[stash_len + buffer_len] = '\0';
	return (free(stash), new_stash);
}

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

char	*ft_getline(char *stash)
{
	char	*line;
	size_t	count;
	size_t	pos;

	count = 0;
	pos = 0;
	if (!stash)
		return (NULL);
	while (stash[count] && stash[count] != '\n')
		count++;
	if (stash[count] == '\n')
		count++;
	line = malloc(count + 1);
	if (!line)
		return (NULL);
	while (count > pos)
	{
		line[pos] = stash[pos];
		pos++;
	}
	line[pos] = '\0';
	return (line);
}

char	*ft_update_rest(char *stash)
{
	char	*new_rest;
	size_t	pos;
	size_t	len;

	if (!stash)
		return (NULL);
	pos = 0;
	len = 0;
	while (stash[pos] && stash[pos] != '\n')
		pos++;
	if (stash[pos] == '\n')
		pos++;
	if (!stash[pos])
		return (free(stash), NULL);
	while (stash[pos + len])
		len++;
	new_rest = malloc(len + 1);
	if (!new_rest)
		return (free(stash), NULL);
	len = 0;
	while (stash[pos])
		new_rest[len++] = stash[pos++];
	new_rest[len] = '\0';
	return (free(stash), new_rest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:20:50 by marvin            #+#    #+#             */
/*   Updated: 2026/01/21 18:42:33 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	ssize_t		num_of_bytes;
	char		buffer[BUFFER_SIZE + 1];
	static char	*rest;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (!ft_newline(rest))
	{
		num_of_bytes = read(fd, buffer, BUFFER_SIZE);
		if (num_of_bytes == 0)
			break ;
		if (num_of_bytes < 0)
			return (free(rest), rest = NULL, NULL);
		buffer[num_of_bytes] = '\0';
		rest = ft_strjoin(rest, buffer);
	}
	if (!rest || rest[0] == '\0')
		return (free(rest), rest = NULL, NULL);
	line = ft_getline(rest);
	rest = ft_update_rest(rest);
	return (line);
}

int main(int argc, char *argv[])
{
    char    *line;
    int     fd;

	if (argc == 1)
	{
		printf("Reading from STDIN...\n");
		fd = 0;
	}
	else
	{
		fd = open (argv[1], O_RDONLY);
		if (fd < 0)
		{
			perror("Error opening file");
			return (1);
		}
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("LINE: %s", line);
		free(line);
	}
	if (fd > 1)
		close(fd);
	return (0);
}

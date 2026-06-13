/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 14:20:36 by marvin            #+#    #+#             */
/*   Updated: 2026/01/20 19:24:44 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	ssize_t		num_of_bytes;
	char		buffer[BUFFER_SIZE + 1];
	static char	*stash[OPEN_MAX];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= OPEN_MAX)
		return (NULL);
	while (!ft_newline(stash[fd]))
	{
		num_of_bytes = read(fd, buffer, BUFFER_SIZE);
		if (num_of_bytes == 0)
			break ;
		if (num_of_bytes < 0)
			return (free(stash[fd]), stash[fd] = NULL, NULL);
		buffer[num_of_bytes] = '\0';
		stash[fd] = ft_strjoin(stash[fd], buffer);
	}
	if (!stash[fd] || stash[fd][0] == '\0')
		return (free(stash[fd]), stash[fd] = NULL, NULL);
	line = ft_getline(stash[fd]);
	stash[fd] = ft_update_stash(stash[fd]);
	return (line);
}

int main(void)
{
    int    fd1, fd2, fd3;
    char   *line;
    int    i = 1;

    fd1 = open("test1.txt", O_RDONLY);
    fd2 = open("test2.txt", O_RDONLY);
    fd3 = open("test3.txt", O_RDONLY);

    if (fd1 < 0 || fd2 < 0 || fd3 < 0)
    {
        perror("Erro ao abrir ficheiros");
        return (1);
    }

    printf("--- Início do Teste Bonus ---\n\n");

    while (i <= 3)
    {
        printf("Volta %d:\n", i);

        line = get_next_line(fd1);
        printf("[FD %d] Linha: %s", fd1, line);
        free(line);

        line = get_next_line(fd2);
        printf("[FD %d] Linha: %s", fd2, line);
        free(line);

        line = get_next_line(fd3);
        printf("[FD %d] Linha: %s", fd3, line);
        free(line);

        printf("\n");
        i++;
    }

    close(fd1);
    close(fd2);
    close(fd3);

    return (0);
}


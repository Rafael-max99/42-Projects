/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:08:29 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:08:29 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_join_args(int argc, char *argv[])
{
	int		pos;
	char	*result;
	char	*temp;

	result = NULL;
	pos = 1;
	while (pos < argc)
	{
		if (result == NULL)
			result = ft_strdup(argv[pos]);
		else
		{
			temp = ft_strjoin(result, " ");
			free(result);
			result = ft_strjoin(temp, argv[pos]);
			free(temp);
		}
		pos++;
	}
	return (result);
}

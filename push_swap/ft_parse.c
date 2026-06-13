/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaurean <rlaurean@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 11:08:36 by rlaurean          #+#    #+#             */
/*   Updated: 2026/06/06 11:08:36 by rlaurean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_validate_and_fill(char **split, int *values)
{
	int		pos;
	long	num;

	pos = 0;
	while (split[pos])
	{
		if (!ft_is_number(split[pos]))
		{
			ft_free_split(split);
			free(values);
			ft_error();
		}
		num = ft_atol(split[pos]);
		if (num < INT_MIN || num > INT_MAX)
		{
			ft_free_split(split);
			free(values);
			ft_error();
		}
		values[pos] = (int)num;
		pos++;
	}
}

static int	*ft_parse_values(int argc, char *argv[], int *size)
{
	char	**split;
	char	*joined;
	int		*values;

	joined = ft_join_args(argc, argv);
	*size = ft_count_words(joined, ' ');
	if (*size == 0)
	{
		free(joined);
		ft_error();
	}
	split = ft_split(joined, ' ');
	free(joined);
	values = malloc(sizeof(int) * (*size));
	if (!values)
	{
		ft_free_split(split);
		ft_error();
	}
	ft_validate_and_fill(split, values);
	ft_free_split(split);
	return (values);
}

void	ft_parse(t_stack *stack, int argc, char *argv[])
{
	int	*values;
	int	size;

	values = ft_parse_values(argc, argv, &size);
	if (ft_has_duplicate(values, size))
	{
		free(values);
		ft_error();
	}
	ft_build_stack(stack, values, size);
	free(values);
}

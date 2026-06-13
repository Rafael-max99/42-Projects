/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:58:43 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 19:44:03 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	(*node).content = content;
	(*node).next = NULL;
	return (node);
}
/*
int	main(void)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;
	t_list	*temp;

	first = ft_lstnew("primeiro");
	second = ft_lstnew("segundo");
	third = ft_lstnew("terceiro");
	(*first).next = second;
	(*second).next = third;
	temp = first;
	while (temp)
	{
		printf("%s\n", (char *)(*temp).content);
		temp = (*temp).next;
	}
	free(third);
	free(second);
	free(first);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:08:19 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/11 19:19:55 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)(*lst).content);
		lst = (*lst).next;
	}
	printf("NULL\n");
}
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while ((*lst).next != NULL)
		lst = (*lst).next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	list = NULL;
	node1 = ft_lstnew("n1");
	node2 = ft_lstnew("n2");
	node3 = ft_lstnew("n3");
	node4 = ft_lstnew("n4");
	list = node1;
	ft_print_list(list);
	ft_lstadd_front(&list, node2);
	ft_print_list(list);
	ft_lstadd_front(&list, node3);
	ft_print_list(list);
	ft_lstadd_front(&list, node4);
	ft_print_list(ft_lstlast(list));
	return (0);
}
*/
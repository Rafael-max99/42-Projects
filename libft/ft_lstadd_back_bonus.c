/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:08:04 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/11 19:12:50 by rlauren          ###   ########.fr       */
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

/*
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr->next = new;
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = *lst;
	while ((*last_node).next != NULL)
		last_node = (*last_node).next;
	(*last_node).next = new;
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
	ft_lstadd_back(&list, node2);
	ft_print_list(list);
	ft_lstadd_back(&list, node3);
	ft_print_list(list);
	ft_lstadd_back(&list, node4);
	return (0);
}
*/
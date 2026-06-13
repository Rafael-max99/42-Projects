/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:39:26 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/11 19:18:08 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	(*node).content = content;
	(*node).next = NULL;
	return (node);
}
*/

/*
static void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst;
	*lst = new;
}
*/

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
static void	ft_hello(void *content)
{
	printf("Hello %s\n", (char *)content);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)((*lst).content);
		lst = (*lst).next;
	}
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*n4;

	list = NULL;
	n1 = ft_lstnew("n1");
	n2 = ft_lstnew("n2");
	n3 = ft_lstnew("n3");
	n4 = ft_lstnew("n4");
	ft_print_list(list);
	ft_lstadd_front(&list, n1);
	ft_lstadd_front(&list, n2);
	ft_lstadd_front(&list, n3);
	ft_lstadd_front(&list, n4);
	ft_print_list(list);
	ft_lstiter(list, ft_hello);
	ft_print_list(list);
	return (0);
}
*/
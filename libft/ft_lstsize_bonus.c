/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:24:22 by rlaurean          #+#    #+#             */
/*   Updated: 2025/11/06 20:52:57 by rlauren          ###   ########.fr       */
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

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = (*lst).next;
		len++;
	}
	return (len);
}
/*
int	main(void)
{
	t_list	*lst;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	lst = NULL;
	n1 = ft_lstnew("n1");
	n2 = ft_lstnew("n2");
	n3 = ft_lstnew("n3");
	printf("%d", ft_lstsize(lst));
	// lst = n1;
	ft_lstadd_front(&lst, n1);
	ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n3);
	printf("%d", ft_lstsize(lst));
	return (0);
}
*/
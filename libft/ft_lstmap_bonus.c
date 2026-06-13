/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:08:22 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/11 19:21:27 by rlauren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

void	*ft_duplicate(void *content)
{
	char	*str;

	str = (char *)content;
	return (ft_strdup(str));
}

static void	ft_delete(void	*content)
{
	free(content);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = (*f)((*lst).content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			(*del)(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = (*lst).next;
	}
	return (new_lst);
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*copy;
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	list = NULL;
	copy = NULL;
	n1 = ft_lstnew(ft_strdup("n1"));
	n2 = ft_lstnew(ft_strdup("n2"));
	n3 = ft_lstnew(ft_strdup("n3"));
	ft_lstadd_back(&list, n1);
	ft_lstadd_back(&list, n2);
	ft_lstadd_back(&list, n3);
	ft_print_list(list);
	printf("1.");
	ft_print_list(copy);
	copy = ft_lstmap(list, ft_duplicate, ft_delete);
	printf("2.");
	ft_print_list(copy);
	ft_lstclear(&list, ft_delete);
	ft_lstclear(&copy, ft_delete);
	return (0);
}
*/
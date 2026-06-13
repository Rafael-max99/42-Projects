/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlauren <rlauren@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:08:13 by rlauren           #+#    #+#             */
/*   Updated: 2025/11/11 19:16:06 by rlauren          ###   ########.fr       */
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
static void	ft_delete(void *content)
{
	free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)((*lst).content);
	free(lst);
}
/*
int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;

	n1 = malloc(sizeof(t_list));
	n2 = malloc(sizeof(t_list));
	n3 = malloc(sizeof(t_list));
	n1->content = ft_strdup("n1");
	n1->next = NULL;
	n2->content = ft_strdup("n2");
		n2->next = NULL;
	n3->content = ft_strdup("n3");
		n3->next = NULL;
	n1->next = n2;
	n2->next = n3;
	ft_print_list(n1);
	ft_lstdelone(n2, ft_delete);
	ft_print_list(n1);
	return (0);
}
*/
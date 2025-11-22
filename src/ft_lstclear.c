/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:27:40 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 16:21:07 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	// create 3 nodes with duplicated strings (malloc'ed)
	node1 = ft_lstnew(ft_strdup("A"));
	node2 = ft_lstnew(ft_strdup("B"));
	node3 = ft_lstnew(ft_strdup("C"));

	// link them together
	head = node1;
	node1->next = node2;
	node2->next = node3;

	printf("Before clear:\n");
	printf("head->content = %s\n", (char *)head->content);
	printf("head->next->content = %s\n", (char *)head->next->content);
	printf("head->next->next->content = %s\n",
		(char *)head->next->next->content);

	// clear the list
	ft_lstclear(&head, free);

	printf("\nAfter clear:\n");
	if (head == NULL)
		printf("head is NULL (list cleared)\n");
	else
		printf("head is not NULL (something went wrong)\n");

	return (0);
}*/

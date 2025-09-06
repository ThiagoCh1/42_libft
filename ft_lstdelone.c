/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:12:03 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 14:24:38 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst -> content);
	free(lst);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	// create two nodes with dynamically allocated content
	node1 = ft_lstnew(ft_strdup("Hello"));
	node2 = ft_lstnew(ft_strdup("World"));
	node1->next = node2;

	printf("Before delete:\n");
	printf("node1: %s\n", (char *)node1->content);
	printf("node2: %s\n", (char *)node2->content);

	// delete node2
	ft_lstdelone(node2, free);
	node1->next = NULL; // unlink it manually (ft_lstdelone doesn't relink)

	printf("\nAfter delete:\n");
	printf("node1: %s\n", (char *)node1->content);
	if (node1->next == NULL)
		printf("node1->next is NULL\n");

	// cleanup node1
	ft_lstdelone(node1, free);

	return (0);
}*/

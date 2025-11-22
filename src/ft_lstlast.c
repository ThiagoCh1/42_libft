/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:25:56 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 11:31:30 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	// create 3 nodes
	node1 = ft_lstnew("A");
	node2 = ft_lstnew("B");
	node3 = ft_lstnew("C");

	// link them together: A -> B -> C
	head = node1;
	node1->next = node2;
	node2->next = node3;

	// test ft_lstlast
	last = ft_lstlast(head);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("List is empty\n");

	// test with empty list
	head = NULL;
	last = ft_lstlast(head);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("List is empty\n");

	return (0);
}
*/

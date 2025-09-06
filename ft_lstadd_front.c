/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 08:54:25 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 19:39:41 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	// create two nodes
	node1 = ft_lstnew("World");
	node2 = ft_lstnew("Hello");

	// head starts at node1
	head = node1;

	// add node2 to the front
	ft_lstadd_front(&head, node2);

	// now head should point to node2, which points to node1
	printf("First node: %s\n", (char *)head->content);
	printf("Second node: %s\n", (char *)head->next->content);

	return (0);
}
*/

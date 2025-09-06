/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:22:34 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 16:32:33 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}

/*#include <stdio.h>

// simple function to use with ft_lstiter
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	// create nodes with duplicated strings
	node1 = ft_lstnew(ft_strdup("A"));
	node2 = ft_lstnew(ft_strdup("B"));
	node3 = ft_lstnew(ft_strdup("C"));

	// link them together
	head = node1;
	node1->next = node2;
	node2->next = node3;

	printf("Iterating over list:\n");
	ft_lstiter(head, print_content);

	// cleanup
	ft_lstclear(&head, free);

	return (0);
}
*/

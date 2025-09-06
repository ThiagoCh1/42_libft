/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:16:26 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 09:27:21 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	// empty list
	head = NULL;
	printf("Size (empty): %d\n", ft_lstsize(head));

	// list with 1 node
	node1 = ft_lstnew("Hello");
	head = node1;
	printf("Size (1 node): %d\n", ft_lstsize(head));

	// list with 2 nodes
	node2 = ft_lstnew("World");
	node1->next = node2;
	printf("Size (2 nodes): %d\n", ft_lstsize(head));

	return (0);
}*/

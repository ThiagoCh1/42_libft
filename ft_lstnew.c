/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 08:41:36 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 08:49:55 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_n;

	new_n = malloc(sizeof(t_list));
	if (new_n == NULL)
		return (NULL);
	new_n -> content = content;
	new_n -> next = NULL;
	return (new_n);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("Hello 42");
	if (node)
	{
		printf("Content: %s\n", (char *)node->content);
		printf("Next: %p\n", (void *)node->next);
	}
	return (0);
}*/

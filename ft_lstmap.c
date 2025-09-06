/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:36:36 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/06 19:37:38 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_head;
	void	*new_content;

	if (!lst)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		new_content = f(lst -> content);
		new = ft_lstnew(new_content);
		if (new == NULL)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		ft_lstadd_back(&new_head, new);
		lst = lst -> next;
	}
	return (new_head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:52:51 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 23:07:56 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

/*int	main(void)
{
	ft_putstr_fd("Hello, stdout!\n", 1);
	ft_putstr_fd("Hello, stderr!\n", 2);
	ft_putstr_fd(NULL, 1); // should do nothing safely
	return (0);
}
*/

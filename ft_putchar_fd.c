/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:48:40 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 23:00:55 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int	main(void)
{
	ft_putchar_fd('A', 1); // stdout → should print 'A'
	ft_putchar_fd('\n', 1);

	ft_putchar_fd('B', 2); // stderr → still prints 'B' to terminal
	ft_putchar_fd('\n', 2);

	return (0);
}
*/

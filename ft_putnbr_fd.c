/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 23:14:03 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 23:37:02 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;
	char	c;

	ln = n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln *= -1;
	}
	if (ln >= 10)
	{
		ft_putnbr_fd(ln / 10, fd);
	}
	c = (ln % 10) + '0';
	ft_putchar_fd(c, fd);
}

/*int	main(void)
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(10, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1); // INT_MAX
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1); // INT_MIN
	ft_putchar_fd('\n', 1);

	return (0);
}
*/

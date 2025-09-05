/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 23:01:51 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 23:29:54 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*int	main(void)
{
	ft_putstr_fd("This is putstr_fd", 1);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("This is putendl_fd", 1);

	return (0);
}*/

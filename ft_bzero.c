/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 03:04:34 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:06:50 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		byte_ptr[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>

int main(void)
{
    char buffer[6] = "hello";

    printf("Before: %s\n", buffer);
    ft_bzero(buffer, 5);
    printf("After:  %s\n", buffer);

    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 06:02:35 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/14 03:39:23 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte_str;

	i = 0;
	byte_str = (unsigned char *)str;
	while (i < n)
	{
		if (byte_str[i] == (unsigned char)c)
			return ((void *)&byte_str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    char data[] = "hello\0world";  // 11 bytes with embedded null
    char *result;

    result = (char *)ft_memchr(data, 'w', 11);

    if (result)
        printf("Found 'w' at position: %ld\n", result - data);
    else
        printf("'w' not found\n");

    return (0);
}*/

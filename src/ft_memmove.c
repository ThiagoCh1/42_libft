/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 05:49:47 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/14 03:58:47 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dest > source && dest < source + len)
		while (len--)
			dest[len] = source[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

/*
#include <stdio.h>

int main(void)
{
    char array[] = "abcdefgh";

    printf("Before: %s\n", array);

    // Move "cde" to overlap with "def" position
    // This tests overlapping memory (src and dest overlap)
    ft_memmove(array + 3, array + 2, 3);

    printf("After:  %s\n", array);

    return (0);
}*/

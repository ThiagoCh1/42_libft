/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 05:49:47 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 06:07:40 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	if (dest_byte < src_byte)
	{
		i = 0;
		while (i < n)
		{
			dest_byte[i] = src_byte[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest_byte[i] = src_byte[i];
		}
	}
	return (dest);
}

/*int main(void)
{
    char array[] = "abcdefgh";

    printf("Before: %s\n", array);

    // Move "cde" to overlap with "def" position
    // This tests overlapping memory (src and dest overlap)
    ft_memmove(array + 3, array + 2, 3);

    printf("After:  %s\n", array);

    return (0);
}*/

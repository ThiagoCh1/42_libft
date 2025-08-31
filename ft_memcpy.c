/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 05:26:08 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 06:26:50 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_byte;
	const unsigned char	*src_byte;

	dest_byte = (unsigned char *)dest;
	src_byte = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_byte[i] = src_byte[i];
		i++;
	}
	return (dest);
}

/*int main(void)
{
    char source[] = "hello world";
    char destination[20];

    printf("Source: %s\n", source);
    ft_memcpy(destination, source, 11);  // 11 includes the null terminator
    printf("Destination: %s\n", destination);

    return (0);
}
*/

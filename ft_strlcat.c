/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:42:18 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 17:06:22 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	j = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len >= size)
		return (dest_len + src_len);
	i = dest_len;
	while (i < size - 1 && *src)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

/*int main(void)
{
    char buffer[10] = "hello";
    char *source = " world";
    size_t result;

    printf("Before: '%s'\n", buffer);
    result = ft_strlcat(buffer, source, 10);
    printf("After:  '%s'\n", buffer);
    printf("Return: %zu\n", result);
    printf("Truncated: %s\n", (result >= 10) ? "YES" : "NO");

    return (0);
}*/

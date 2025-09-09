/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:19:08 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/09 20:34:50 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>

int main(void)
{
    char dest[6];
    char *source = "hello world";
    size_t result;

    result = ft_strlcpy(dest, source, 6);

    printf("Source: '%s' (length: %zu)\n", source, result);
    printf("Dest:   '%s'\n", dest);
    printf("Truncated: %s\n", (result >= 6) ? "YES" : "NO");

    return (0);
}*/

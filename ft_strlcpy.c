/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 16:19:08 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 16:42:39 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && *src)
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

/*int main(void)
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

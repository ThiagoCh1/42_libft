/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 21:02:35 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:08:19 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)str);
	if (!str || !needle)
		return (NULL);
	i = 0;
	while (i < len && str[i])
	{
		j = 0;
		while ((i + j) < len && str[i + j]
			&& needle[j] && str[i + j] == needle[j])
		{
			j++;
		}
		if (!needle[j])
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
	const char *haystack = "Hello, World!";
	const char *needle = "World";
	char *result;

	result = ft_strnstr(haystack, needle, 13);

	if (result)
		printf("Found '%s' at position: %ld\n", needle, result - haystack);
	else
		printf("'%s' not found\n", needle);

	return (0);
}*/

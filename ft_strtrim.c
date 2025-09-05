/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 00:24:35 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 01:06:12 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*dest;

	if (*s1 == '\0')
	{
		dest = ft_substr(s1, 0, 0);
		return (dest);
	}
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	if (i > j)
	{
		dest = ft_substr(s1, 0, 0);
		return (dest);
	}
	size = j - i + 1;
	dest = ft_substr(s1, i, size);
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char *result;

	// Test 1: Normal trimming
	result = ft_strtrim("  hello world  ", " ");
	printf("ft_strtrim(\"  hello world  \", \" \") = \"%s\"\n", result);
	free(result);

	// Test 2: Multiple trim characters
	result = ft_strtrim("***hello***", "*");
	printf("ft_strtrim(\"***hello***\", \"*\") = \"%s\"\n", result);
	free(result);

	// Test 3: Mixed trim set
	result = ft_strtrim("abcHELLaOcba", "abc");
	printf("ft_strtrim(\"abcHELLaOcba\", \"abc\") = \"%s\"\n", result);
	free(result);

	return (0);
}
*/

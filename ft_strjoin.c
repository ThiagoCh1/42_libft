/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 23:15:33 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 23:35:38 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, s1, len);
	ft_strlcat(dest, s2, len);
	return (dest);
}

/*
#include <stdio.h>

 int main(void)
{
	const char *str1 = "Hello, ";
	const char *str2 = "World!";
	char *result;

	result = ft_strjoin(str1, str2);
	if (!result)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("String 1: \"%s\"\n", str1);
	printf("String 2: \"%s\"\n", str2);
	printf("Joined: \"%s\"\n", result);

	free(result);
	return (0);
}
*/

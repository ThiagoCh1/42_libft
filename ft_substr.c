/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:20:22 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 23:03:33 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

/*#include <stdio.h>

int main(void)
{
	const char *original = "Hello, World!";
	char *result;

	// Test normal case
	result = ft_substr(original, 7, 5);
	printf("ft_substr(\"%s\", 7, 5) = \"%s\"\n", original, result);
	free(result);

	// Test start beyond string
	result = ft_substr(original, 20, 5);
	printf("ft_substr(\"%s\", 20, 5) = \"%s\"\n", original, result);
	free(result);

	return (0);
}
*/

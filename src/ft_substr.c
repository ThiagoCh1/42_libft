/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 22:20:22 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/14 03:45:15 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include <stdlib.h>

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	act_len;
	char	*sub;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		act_len = 0;
	else
	{
		if (len < slen - start)
			act_len = len;
		else
			act_len = slen - start;
	}
	sub = (char *)malloc(act_len + 1);
	if (!sub)
		return (NULL);
	if (act_len > 0)
		ft_memcpy(sub, s + start, act_len);
	sub[act_len] = '\0';
	return (sub);
}

/*
#include <stdio.h>

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

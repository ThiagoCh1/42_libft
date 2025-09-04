/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 06:29:48 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:08:28 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_found;

	last_found = NULL;
	while (*str)
	{
		if (*str == c)
			last_found = ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (last_found);
}

/*
#include <stdio.h>

int main(void)
{
    char *test_str = "hello world";
    char *result;

    result = ft_strrchr(test_str, 'o');
    printf("String: '%s'\n", test_str);
    printf("Found 'o': '%s'\n", result);

    return (0);
}*/

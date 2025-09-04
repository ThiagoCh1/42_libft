/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 06:11:38 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:07:53 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    char *test_str = "hello world";
    char *result;

    result = ft_strchr(test_str, 'o');
    printf("String: '%s'\n", test_str);
    printf("Found 'o': '%s'\n", result);

    return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 05:39:58 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:08:14 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
    char *str1 = "hello";
    char *str2 = "help";
    int result;

    result = ft_strncmp(str1, str2, 3);
    printf("Comparing '%s' and '%s' (first 3 chars)\n", str1, str2);
    printf("Result: %d\n", result);

    return (0);
}*/

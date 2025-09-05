/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 16:43:00 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 17:09:11 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*arr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	arr = malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		arr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

/*
#include <stdio.h>

char	shift_by_index(unsigned int i, char c)
{
	return (c + i);
}

char	alt_case(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	return (ft_tolower(c));
}

int	main(void)
{
	char	*s;
	char	*result1;
	char	*result2;

	s = "Hello World!";
	result1 = ft_strmapi(s, shift_by_index);
	result2 = ft_strmapi(s, alt_case);
	if (result1)
	{
		printf("Original : %s\n", s);
		printf("Shifted  : %s\n", result1);
		free(result1);
	}
	if (result2)
	{
		printf("Alt case : %s\n", result2);
		free(result2);
	}
	return (0);
}
*/

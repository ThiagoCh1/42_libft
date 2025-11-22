/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:18:56 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/14 19:06:21 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

static int	get_len(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	ln;
	int		len;
	char	*s;

	ln = (long)n;
	len = get_len(ln);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (ln < 0)
	{
		s[0] = '-';
		ln = -ln;
	}
	if (ln == 0)
		s[--len] = '0';
	while (ln > 0)
	{
		s[--len] = (char)('0' + (ln % 10));
		ln /= 10;
	}
	return (s);
}

/*
#include <stdio.h>
#include <limits.h>

int main(void)
{
	char *result;

	// Test positive number
	result = ft_itoa(123);
	printf("ft_itoa(123) = \"%s\"\n", result);
	free(result);

	// Test negative number
	result = ft_itoa(-456);
	printf("ft_itoa(-456) = \"%s\"\n", result);
	free(result);

	// Test zero
	result = ft_itoa(0);
	printf("ft_itoa(0) = \"%s\"\n", result);
	free(result);

	// Test INT_MIN
	result = ft_itoa(INT_MIN);
	printf("ft_itoa(INT_MIN) = \"%s\"\n", result);
	free(result);

	return (0);
}
*/

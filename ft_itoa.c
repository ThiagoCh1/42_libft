/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:18:56 by thribeir          #+#    #+#             */
/*   Updated: 2025/10/13 14:06:18 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
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
	char	*num;

	ln = n;
	len = get_len(ln);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (ln == 0)
		num[0] = '0';
	if (ln < 0)
	{
		num[0] = '-';
		ln = -ln;
	}
	while (ln > 0)
	{
		num[--len] = (ln % 10) + '0';
		ln /= 10;
	}
	return (num);
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

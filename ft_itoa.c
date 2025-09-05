/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 15:18:56 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 15:54:27 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n /= 10;
		count += 2;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	long	ln;
	char	*num;

	i = 0;
	ln = n;
	len = get_len(n);
	num = malloc(len + 1);
	if (num == NULL)
		return (NULL);
	if (ln < 0)
	{
		num[i] = '-';
		i++;
		ln *= -1;
	}
	num[len] = '\0';
	while (len > i)
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

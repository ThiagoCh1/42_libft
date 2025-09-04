/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 16:52:56 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:12:57 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		count++;
		*str++;
	}
	return (count);
}

/*
#include <stdio.h>

int main(void)
{
	size_t a = ft_strlen("donkey");
	printf("%ld\n", a);
}
*/

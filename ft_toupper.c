/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 06:02:08 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 22:08:36 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
    char test_chars[] = {'a', 'z', 'H', '5', ' ', 'm'};
    int i;

    printf("Testing ft_toupper:\n");
    for(i = 0; i < 6; i++)
    {
        printf("'%c' -> '%c'\n", test_chars[i], ft_toupper(test_chars[i]));
    }

    return (0);
}*/

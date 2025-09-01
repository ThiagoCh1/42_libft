/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 06:06:39 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/01 06:08:09 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*int main(void)
{
    char test_chars[] = {'a', 'z', 'H', '5', ' ', 'm'};
    int i;

    printf("Testing ft_tolower:\n");
    for(i = 0; i < 6; i++)
    {
        printf("'%c' -> '%c'\n", test_chars[i], ft_tolower(test_chars[i]));
    }

    return (0);
}*/

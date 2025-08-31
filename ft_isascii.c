/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 01:37:31 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 01:43:36 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'z', '0', '#', 'm', 'Z', 128, -1};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < size; i++)
    {
        char c = test_chars[i];
        printf("Testando '%c': %d\n", c, ft_isascii(c));
    }

    return 0;
}*/

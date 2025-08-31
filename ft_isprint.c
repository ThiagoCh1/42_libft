/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 01:46:34 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 01:52:13 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'z', '0', '#', 'm', 'Z', 127, 12, 32};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < size; i++)
    {
        char c = test_chars[i];
        printf("Testando '%c': %d\n", c, ft_isprint(c));
    }

    return 0;
}*/

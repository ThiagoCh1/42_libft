/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 01:04:01 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 01:14:07 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'z', '0', '#', 'm', 'Z'};
    int size = sizeof(test_chars) / sizeof(test_chars[0]);

    for (int i = 0; i < size; i++)
    {
        char c = test_chars[i];
        printf("Testando '%c': %d\n", c, ft_isdigit(c));
    }

    return 0;
}*/

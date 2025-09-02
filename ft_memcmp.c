/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 06:17:58 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/02 06:30:41 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*byte_str1;
	unsigned char	*byte_str2;

	i = 0;
	byte_str1 = (unsigned char *)str1;
	byte_str2 = (unsigned char *)str2;
	while (i < n)
	{
		if (byte_str1[i] != byte_str2[i])
			return (byte_str1[i] - byte_str2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
    char data1[] = "hello";
    char data2[] = "help";
    int result;

    result = ft_memcmp(data1, data2, 4);
    printf("Comparing first 4 bytes of '%s' and '%s'\n", data1, data2);
    printf("Result: %d\n", result);

    return (0);
}*/

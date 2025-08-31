/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 02:03:36 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/31 02:51:24 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t			i;
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		byte_ptr[i] = c;
		i++;
	}
	return (ptr);
}

/*int main(void)
{
    char buffer[6] = "hello";

    printf("Before: %s\n", buffer);
    ft_memset(buffer, 'X', 5);
    printf("After:  %s\n", buffer);

    return (0);
}
*/

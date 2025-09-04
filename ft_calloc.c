/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:05:00 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 17:46:06 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	size_t			len;
	size_t			i;
	void			*ptr;
	unsigned char	*byte_ptr;

	len = n * size;
	i = 0;
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;

	while (i < len)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*int main(void)
{
	int *arr;
	int i;

	arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("Array values after ft_calloc:\n");
	for (i = 0; i < 5; i++)
		printf("arr[%d] = %d\n", i, arr[i]);

	free(arr);
	return (0);
}*/

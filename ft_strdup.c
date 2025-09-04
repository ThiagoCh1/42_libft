/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 17:47:48 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/04 18:00:41 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dest;
	int		i;
	int		size;

	size = 0;
	i = 0;
	while (str[i])
	{
		size++;
		i++;
	}
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	const char *original = "Hello, World!";
	char *duplicate;

	duplicate = ft_strdup(original);
	if (!duplicate)
	{
		printf("Allocation failed\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);

	free(duplicate);
	return (0);
}*/

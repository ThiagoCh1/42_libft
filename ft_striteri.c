/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 22:14:42 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 22:36:46 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	alt_case(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

int	main(void)
{
	char	str[] = "Hello World!";

	printf("Before : %s\n", str);
	ft_striteri(str, alt_case);
	printf("After  : %s\n", str);
	return (0);
}
*/

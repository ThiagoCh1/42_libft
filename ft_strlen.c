/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 06:09:50 by thribeir          #+#    #+#             */
/*   Updated: 2025/08/29 06:09:50 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char* str)
{
    int	count;

    count = 0;
    while (*str)
    {
        *str++;
        count++;
    }
    return (count);
}

int main(void)
{
	int a = ft_strlen("macaco");
	printf("%d", a);
}
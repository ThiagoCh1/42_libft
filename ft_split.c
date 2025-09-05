/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <thribeir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 01:10:59 by thribeir          #+#    #+#             */
/*   Updated: 2025/09/05 15:03:35 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	**free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**create_arr(char const *s, char c, char **arr)
{
	int	i;
	int	start;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			arr[index] = ft_substr(s, start, i - start);
			if (arr[index] == NULL)
				return (free_all(arr));
			index++;
		}
	}
	arr[index] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**arr;

	words = count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = create_arr(s, c, arr);
	return (arr);
}

/*void	free_split_result(char **result)
{
	int i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

#include <stdio.h>

int main(void)
{
	char **result;
	int i;

	result = ft_split("hello world test", ' ');

	printf("Words:\n");
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}

	free_split_result(result);
	return (0);
}*/

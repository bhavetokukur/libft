/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:05:24 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/17 19:44:33 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int words_num(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char 	**arr;
	

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
		{
			arr[j] = k, i - k, j;
			j++;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;
	int 	words;

	i = 0;
	j = 0;
	words = words_num(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
		{
			arr[j] = ft_substr(s, k, i - k);
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}

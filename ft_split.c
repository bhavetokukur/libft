/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:05:24 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/02 22:40:41 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
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

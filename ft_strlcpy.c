/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:23:28 by thaziiev          #+#    #+#             */
/*   Updated: 2024/04/16 14:54:47 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));	
}

int main(void)
{
	char str1[50] = "Hello, World!";
	char str2[50] = "Hello, World!";

	printf("Before ft_strlcpy: %s\n", str1);
	strlcpy(str1, str1, 13);
	printf("After ft_strlcpy: %s\n", str1);

	printf("Before strlcpy: %s\n", str2);
	strlcpy(str2, str2, 13);
	printf("After strlcpy: %s\n", str2);
	return (0);
}
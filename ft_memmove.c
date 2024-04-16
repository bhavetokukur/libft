/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:40 by thaziiev          #+#    #+#             */
/*   Updated: 2024/04/15 21:52:37 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	const char	*s;

	tmp = dest;
	s = src;
	if (dest < src)
	{
		printf("dest %s\n", (char *)dest);
		printf("src %s\n", (char *)src);
		while (n--)
			*tmp++ = *s++;
	}
	else
	{
		tmp += n;
		s += n;
		while (n--)
			*--tmp = *--s;
	}
	return (dest);
}

int main(void)
{
	char str1[50] = "Hello, World!";
	char str2[50] = "Hello, World!";

	printf("Before ft_memmove: %s\n", str1);
	ft_memmove(str1, str1, 13);
	printf("After ft_memmove: %s\n", str1);

	printf("Before memmove: %s\n", str2);
	memmove(str2, str2, 13);
	printf("After memmove: %s\n", str2);
	return (0);
}
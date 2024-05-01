/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:23:44 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/01 21:44:49 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_bzero.c"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb > INT_MAX || size > INT_MAX)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, nmemb * size);
	return (p);
}

// int main()
// {
//     int *p = (int *)ft_calloc(6, sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d\n", p[i]);
//     }
//     return 0;
// }
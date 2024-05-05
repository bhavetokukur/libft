/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:06:12 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/05 21:19:18 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str_malloc(int len, int sign)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1 + sign));
	if (!str)
		return (NULL);
	return (str);
}

int	n_len(int n)
{
	int	len;

	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*n_min(void)
{
	char	*str;

	str = "-2147483648";
	return (str);
}

char	*make_str(char *str, int len, int num, int sign)
{
	str[len + 1] = '\0';
	if (sign)
		str[0] = '-';
	while (len + sign)
	{
		str[len + sign] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	str[len] = num % 10 + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		num;
	char	*str;
	int		len;
	int		sign;

	len = 0;
	sign = 0;
	if (n == INT_MIN)
		return (n_min());
	if (n < 0)
	{
		n = -n;
		sign = 1;
	}
	num = n;
	len = n_len(n);
	str = str_malloc(len, sign);
	str = make_str(str, len, num, sign);
	return (str);
}

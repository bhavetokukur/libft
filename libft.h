/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:46:13 by thaziiev          #+#    #+#             */
/*   Updated: 2024/04/16 14:53:46 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(char c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int	    ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int 	ft_strlcpy(char *dst, const char *src, size_t size);
int	    ft_strncmp(const char *s1, char *s2, size_t n);
int     ft_memcmp(const void *b1, const void *b2, size_t len);

#endif
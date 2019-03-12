/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:04:23 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 19:32:33 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#ifndef LIBFT
#define LIBFT

extern void * ft_memcpy(void *restrict dst, const void *restrict srs, size_t n);

extern int     ft_atoi(const char *str);

extern void    ft_bzero(void *s, size_t n);

extern int     ft_isalnum(int c);

extern int     ft_isalpha(int c);

extern int     ft_isascii(int c);

extern int     ft_isdigit(int c);

extern int     ft_isprint(int c);

extern int     ft_memcmp(const void *s1, const void *s2, size_t n);

extern void    *ft_memmove(void *dst, const void *src, size_t  len);

extern void    *ft_memset(void *b, int c, size_t n);

extern int     ft_strlen(char *str);

extern int     ft_tolower(int c);

extern int ft_toupper(int c);

extern void * ft_memchr(const void *s, int c, size_t n);

extern void * ft_memalloc(size_t size);

#endif
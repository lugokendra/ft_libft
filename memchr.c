/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 18:45:28 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 19:00:16 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void * ft_memchr(const void *s, int c, size_t n)
{
	size_t count = 0;
	unsigned char *source;
	unsigned char value;

	source = (unsigned char *)s;
	value = (unsigned char)c;
	
	
	while(count < n)
	{
		if (source [count] == value)
			return(void *)(source + count);
	}
	return NULL;
}

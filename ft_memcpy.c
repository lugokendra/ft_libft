/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:38:26 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 18:40:43 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void* ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t count = 0;
	unsigned char *destination;
	unsigned char *source;

	destination = (unsigned char*)dst;
	source = (unsigned char*)src;

	while(count < n)
	{ 
		destination[count] = source[count];
		++count;
	}
	return dst;
}	

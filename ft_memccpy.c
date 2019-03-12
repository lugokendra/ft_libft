/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:14:03 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 18:17:00 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void * ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *destination;
    unsigned char *source;
    unsigned char value;

    destination = (unsigned char *)dst;
    source = (unsigned char *)src;
    value = (unsigned char)c;
    while (n > 0){
        *destination = *source;
        destination++;
        source++;
        n--;
        if (*(destination - 1) == value)
        {
            return (void*)destination;
        }
    }
    return NULL;
}
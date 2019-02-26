/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:02:15 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 20:11:29 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t  len)
{
void * tmp;

tmp = ft_memalloc(len);

if (tmp == NULL)
    return (dst);

ft_memcpy(tmp, src, len);
ft_memcpy(dst, tmp, len);

ft_memdel(tmp);

return (dst);
}

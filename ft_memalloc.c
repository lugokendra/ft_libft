/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kendralugo <kendralugo@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:24:23 by kelugo            #+#    #+#             */
/*   Updated: 2019/03/11 21:19:20 by kendralugo       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void * ft_memalloc(size_t size)
{
    void *ptr;

    if (!(ptr = malloc(size)))
        return (NULL);
    ft_bzero(ptr, size);
    return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 19:24:23 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 19:33:11 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void * ft_memalloc(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    return (ptr);
}

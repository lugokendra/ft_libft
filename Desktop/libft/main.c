/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:51:27 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/24 17:16:18 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char dst[15];
	char src[]="Hello World";
	size_t n = strlen(src) + 1;
	void* rdst = ft_memcpy(dst, src, n);
	printf("%s = %s , %p = %p\n", src, dst, (void*)dst, rdst);
	return(0);
}

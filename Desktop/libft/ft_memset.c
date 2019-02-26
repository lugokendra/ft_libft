/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 14:16:12 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/24 21:31:59 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t n)
{
	size_t			ndx;
	unsigned char	*block;

	ndx = (size_t)0;
	block = (unsigned char *)b;

	while (ndx < n)
	{
		block[ndx] = (unsigned char)c;
		ndx++;
	}
	return (b);
}

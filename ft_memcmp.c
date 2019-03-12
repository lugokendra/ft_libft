/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelugo <kelugo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:24:10 by kelugo            #+#    #+#             */
/*   Updated: 2019/02/25 18:40:39 by kelugo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n) 
{
    unsigned char *string1;
    unsigned char *string2;

    string1 = (unsigned char *)s1;
    string2 = (unsigned char *)s2;
    
    if (string1 == string2) {
        return 0;
    } 
      else if (string1 == NULL) {
          return -1;
      } else if (string2 == NULL) {
          return 1;
      } else {
          while (n > 0) {
             if (*string1 < *string2) {
                  return -1;
             } else if (*string1 > *string2) {
                  return 1;
             }
             string1++;
             string2++;
             n--;
          }
          return 0;
      }
}

#include <string.h>
#include "libft.h"

char * ft_strsub(char const *s, unsigned int
start, size_t len)
{
  unsigned int	ndx;
  char			*str;
  
  ndx = 0;
  if (start < 0 || len < 1 || s == NULL)
    return (NULL);
  str = (char *)ft_memalloc(sizeof(char) * len + 1);
  if (str == NULL)
    return (NULL);
  while (ndx < len)
  {
		str[ndx] = s[ndx + start];
    	ndx++;
  }
  str[ndx] = '\0';
  return (str);
}

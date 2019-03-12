#include <string.h>
#include "libft.h"

  char * ft_strjoin(char const *s1, char const
*s2)
{
  unsigned int	ndx1;
  unsigned int	ndx2;
  char			*result;
  
  ndx1 = 0;
  ndx2 = 0;
  if (s1 == NULL || s2 == NULL)
    return (NULL);
  result = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
  if (result == NULL)
    return (NULL);
  while (s1[ndx1] != '\0') //the value that the array contains @ that location != "NULL"
  {
    result[ndx1] = s1[ndx1];
    ndx1++;
  }
  while (s2[ndx2] != '\0')
  {
    result[ndx2 + ndx1] = s2[ndx2];
    ndx2++;
  }
  result[ndx1 + ndx2] = '\0';
  return (result);
}

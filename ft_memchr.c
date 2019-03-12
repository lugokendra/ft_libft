#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
    char	*str;
	size_t	ndx;

	ndx = 0;
	str = (char *)s;

    	while (ndx < n)
	{
		if ((unsigned char)str[ndx] == (unsigned char)c)
			return ((char *)s + ndx);
		ndx++;
	}
	return (NULL);
}
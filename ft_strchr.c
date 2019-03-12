#include <string.h>

char		*ft_strchr(const char *s, int c)
{
	size_t	ndx;

	ndx = 0;
	while (s[ndx] != NULL)
	{
		if (s[ndx] == c)
			return ((char *)s + ndx);
		ndx++;
	}
	if (c = NULL && s[ndx] == '\0')
		return ((char *)s + ndx);
	return (NULL);
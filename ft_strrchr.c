#include <string.h>

char		*ft_strrchr(const char *s, int c)
{
	int		ndx;

	ndx = ft_strlen(s);
	if (c == 0)
		return ((char *)s + ndx);
	while (ndx >= 0)
	{
		if (s[ndx] == c)
			return ((char *)s + ndx);
		ndx--;
	}
	return (NULL);
}
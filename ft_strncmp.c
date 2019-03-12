
#include <string.h>

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ndx;

	ndx = 0;
	if (n == 0)
		return (0);
	while (s1[ndx] != '\0' && s1[ndx] == s2[ndx] && ndx < n - 1)
		ndx++;
	return ((unsigned char)s1[ndx] - (unsigned char)s2[ndx]);
}

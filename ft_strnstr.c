#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*src;
	char	*find;
	size_t	size;

	src = (char *)haystack;
	find = (char *)needle;
	size = ft_strlen(find);
	if (size == 0)
		return (char *)(src);
	if (size > len)
		return ((char *)NULL);
	while (len-- >= size && *src)
	{
		if (ft_strncmp(src, find, size) == 0)
			return ((char *)src);
		src++;
	}
	return ((char *)NULL);
}

char *ft_strstr(const char *haystack, const char *needle)
{
	int ndx;
	int pos;
	int len;

	ndx = 0;
	pos = 0;
	len = 0;
	while (needle[len] != '\0')
		len++;
	if (len == 0)
		return ((char *)haystack);
	while (haystack[ndx])
	{
		while (needle[pos] == haystack[ndx + pos])
		{
			if (pos == len - 1)
				return ((char *)haystack + ndx);
			pos++;
		}
		pos = 0;
		ndx++;
	}
	return (0);
}
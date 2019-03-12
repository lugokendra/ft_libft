#include <string.h>

char    *ft_strncpy(char *dst, const char *src, size_t len)
{
    size_t ndx;

    ndx = 0;
    while (src[ndx] && ndx < len)
    {
        dst[ndx] = src[ndx];
        ndx++;
    }
    while (ndx < len)
    {
    dst[ndx] = '\0';
    ndx++;
    }
    return (dst);
 }
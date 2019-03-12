#include <string.h>

size_t  ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t ndx;
    size_t ldst;
    size_t lsrc;

    ldst = ft_strlen(dst);
    lsrc = ft_strlen(src);
    if (dstsize < ldst)
        return (dstsize - lsrc);
    ndx = 0;
    while (src[ndx] && (ldst + ndx + 1) < dstsize)
    {
        dst[ldst + ndx] = src[ndx];
        ndx++;
    }
    dst[ldst + ndx] = '\0';
    return (ldst + lsrc);
}
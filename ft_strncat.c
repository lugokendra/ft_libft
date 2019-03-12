#include <string.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    size_t ndx;
    size_t len;

    if (*s2 != NULL)
    {
        ndx = 0;
        len = 0;
        while (s1[len])
            len++;
        while (s2[ndx] != NULL && ndx < n)
        {
            s1[len + ndx] = s2[ndx];
            ndx++;
        }
        s1[len + ndx] = '\0';
    }
    return (s1)
}
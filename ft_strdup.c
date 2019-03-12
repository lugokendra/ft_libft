#include <string.h>
#include <stdlib.h>

char *ft_strdup(const char *s1)
{
    int  ndx;
    int  len;
    char *cpy;

    ndx = 0;
    if (s1 == NULL)
        return (NULL);
    while (s1[ndx] != '\0')
    {
        ndx++;
    }
    len = ndx + 1;
    ndx = 0;
    if ((cpy = (char*)malloc(len)))
    {
        while (ndx <= len)
        {
            cpy[ndx] = s1[ndx];
            ndx++;
        }
        return (cpy);
    }
    return (NULL);
}
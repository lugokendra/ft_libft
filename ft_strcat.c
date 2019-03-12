#include <string.h>

char *ft_strcat(char *s1, const char *s2)
{
    int ndx;
    int len;

    ndx = 0;
    len = 0;

    while (s1[len] != NULL)
        len++;
    while (s2[ndx] != NULL)
    {
        s1[len] = s2[len];
        len++;
        ndx++;
    }
    s1[len] = '\0';
    return (s1);
}
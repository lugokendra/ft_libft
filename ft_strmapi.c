#include <string.h>
#include <unistd.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    ndx;
    char            *str;

    ndx = 0;
    str = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (str == NULL)
        return (NULL);
while (s[ndx] != '\0')
{
    str[ndx] = f(ndx, s[ndx]);
    ndx++;
}
str[ndx] = '\0';
return (str);
}
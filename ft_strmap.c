#include <string.h>
#include <unistd.h>

char *ft_strmap(char const *s, char (*f)(char))
{
    unsigned int    ndx;
    char            *str;

    ndx = 0;
    str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
    if (str == NULL)
        return (NULL);
while (s[ndx] != '\0')
{
    str[ndx] = f(s[ndx]);
    ndx++;
}
str[ndx] = '\0';
return (str);
}

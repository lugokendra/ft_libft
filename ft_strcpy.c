char    *ft_strcpy(char *dest, char *src)
{
    int ndx;

    ndx = 0;
    while (src[ndx])
    {
        dest[ndx] = src[ndx];
        ndx++;
    }
    dest[ndx] = '\0';
    return (dest);
 }
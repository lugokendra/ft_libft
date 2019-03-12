void    ft_striter(char *s, void (*f)(char *))
{
    unsigned int ndx;

    ndx = 0;
    while (s[ndx] != '\0')
    {
        f(s + ndx);
        ndx++;
    }
}

void ft_striteri(char *s, void(*f)(unsigned int, char *))
{
    unsigned int ndx;

    ndx = 0;
    while (s[ndx] != '\0')
    {
        f(ndx, s + ndx);
        ndx++;
    }
}
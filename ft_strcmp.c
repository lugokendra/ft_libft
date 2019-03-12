int ft_strcmp(char *s1, char *s2)
{
    int ndx;

    ndx = 0;

while (s1[ndx] == s2[ndx] && s1[ndx] && s2[ndx])
    ndx++;
return (s1[ndx] - s2[ndx]);
}

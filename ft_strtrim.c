#include "libft.h"
char		*ft_strtrim(char const *s)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	k;
	char			*str;
  
	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] != '\0')
		i++;
	if (s[i] == '\0')
    {
        str = (char*)ft_memalloc(sizeof(char) * 2);
		return (ft_strcpy(str, ""));
    }
  
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t' && j != 0)
		j--;
  
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
  
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
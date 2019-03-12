#include "libft.h"

void		ft_strclr(char *s)
{
	unsigned int	ndx;

	ndx = 0;
	while (s[ndx] != '\0')
	{
		s[ndx] = '\0';
		ndx++;
	}
}
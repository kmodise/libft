#include "libft.h"

void	ft_putstr(char *s)
{
	int		l;

	l = 0;
	while(s[l] != '\0')
	{
		write(1,&s[l],1);
		l++;
	}
}

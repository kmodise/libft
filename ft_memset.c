#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *str, int a, size_t len)
{
	size_t	l;
	char	*s;

	l = 0;
	s = (char *)str;
	while (l < len)
	{
		s[l] = (char)a;
		l++;
	}
	return (str);
}

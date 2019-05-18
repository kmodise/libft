#include <unistd.h>
#include <stdio.h>

void	*ft_memset(void *str, int a, size_t len)
{
	int	l;
	char	*s;

	l = 0;
	s = (char *)str;
	while (l <= len)
	{
		s[l] = (char)a;
		l++;
	}
}

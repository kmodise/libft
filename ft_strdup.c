#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	int	len;
	char	*stain;

	i = 0;
	stain = (char *malloc(length * sizeof(*stain)));
	if (stain == NULL)
	{
		return (stain);
	}
	while (s[i] != '\0')
	{
		stain[i] = (char)s[i];
		i++;
	}
	stain[i] = '\0';
	return (stain);
}

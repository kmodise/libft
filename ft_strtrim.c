
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	i;
	char	*dd;
	char	*hold;

	hold = (char *)s;
	i = 0;
	dd = (char)malloc((ft_strlen(s)) * sizeof(char));
	while (s[i] != '\0')
	{
		while (hold[i] == ' ' || hold[i] == '\n'
				|| hold[i] == '\t')
		{
			i++;
		}
		dd[i] = hold[i];
		i++;
	}
}

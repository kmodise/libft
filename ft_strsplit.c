/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 14:21:00 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/16 10:08:31 by kmodise          ###   ########.fr       */
/*   Updated: 2019/06/10 11:53:17 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_no_words(char const *s, char c)
{
	int		n_w;
	int		i;
	int		len;

	i = 0;
	len = 0;
	n_w = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		if ((s[i] == c || s[i + 1] == '\0') && len != 0)
		{
			n_w++;
			len = 0;
		}
		i++;
	}
	return (n_w);
}

char	**ft_strsplit(char const *s, char c)
{
	 int	i;
	 int	j;
	 int	k;
	 char	**new_str;

	 i = 0;
	 k = 0;
	 new_str = (char **)malloc(sizeof(char *) * (ft_no_words(s, c)) + 1);
	 if (new_str == NULL)
	 {
		 return (NULL);
	 }
	 while (s[i])
	 {
		 while (s[i] == c)
		 {
			 i++;
		 }
		 j = i;
		 while (s[i] && s[i] != c)
		 {
			 i++;
		 }
		 if (i > j)
		 {
			 new_str[k] = ft_strndup(s + j, i - j);
			 k++;
		 }
	 }
	 new_str[k] = NULL;
	 return (new_str);
}

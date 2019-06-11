/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 14:21:00 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/11 10:12:48 by kmodise          ###   ########.fr       */
/*   Updated: 2019/06/10 11:53:17 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_no_words(char const *s, char c)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (words);
}

char	*ft_strndup(const char *s, size_t n)
{
	char	*st;

	st = (char *)malloc(sizeof(char) * (n + 1));
	if (st == NULL)
	{
		return (NULL);
	}
	st = ft_strncpy(st, s, n);
	st[n] = '\0';
	return (st);
}

char	**ft_strsplit(char const *s, char c)
{
	 int	i;
	 int	j;
	 int	k;
	 char	**new_str;

	 i = 0;
	 k = 0;
	 new_str = (char **)malloc(sizeof(char) * (ft_no_words(s, c)) + 1);
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

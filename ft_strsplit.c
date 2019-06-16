/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 10:59:51 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/16 12:00:33 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_no_words(char const *s, char c)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			w++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (w);
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

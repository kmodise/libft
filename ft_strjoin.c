/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 13:14:46 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/02 13:43:54 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	size_t	i;
	size_t	k;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	k = 0;
	joint = (char *)malloc((len2 + len2 + 1) * sizeof(char));
	if (joint == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		joint[i] = (char)s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		joint[i + k] = (char)s2[k];
		k++;
	}
	joint[k + i] = '\0';
	return (joint);
}

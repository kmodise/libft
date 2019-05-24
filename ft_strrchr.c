/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:25:45 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/24 11:58:10 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	//char	*store;
	
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s+i);
		}
		i--;
	}
	return (NULL);
}

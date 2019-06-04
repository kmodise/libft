/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:31:42 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/04 17:31:38 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *mouse, const char *cat)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (cat[i] == '\0')
	{
		return ((char *)&mouse[i]);
	}
	while (mouse[i] != '\0')
	{
		while (mouse && cat[l] == mouse[i + l])
		{
			l++;
		}
		if (cat[i] == '\0')
		{
			return ((char *)&mouse[i]);
		}
		l = 0;
		i++;
	}
	return (NULL);
}

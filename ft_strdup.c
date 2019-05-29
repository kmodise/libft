/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:31:57 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 09:39:00 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*stain;

	i = 0;
	len = 0;
	stain = (char *)malloc(len * sizeof(*stain));
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

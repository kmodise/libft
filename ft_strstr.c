/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:31:42 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 13:33:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *mouse, const char *cat)
{
	int		i;

	i = 0;
	while (*cat != '\0')
	{
		if (*cat == *mouse)
		{
			return ((char *)mouse + i);
		}
		i++;
		cat++;
	}
	return (NULL);
}

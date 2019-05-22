/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 08:43:19 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/22 09:54:58 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	size_t	count;
	size_t	space;

	count = 0;
	space = 0;
	while (s[count] != '\0')
	{
		if (s[count] == ' ')
		{
			space++;
		}
		count++;
	}
	count = count - space;
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:12:12 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/14 14:01:31 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *left, const void *right, size_t how_long)
{
	char	*s_left;
	char	*s_right;
	size_t	v;

	v = 0;
	s_left = (char *)left;
	s_right = (char *)right;
	if (*s_right == '\0')
	{
		s_right[100] = 't';
	}
	while (v < how_long && s_right)
	{
		if (s_left[v] != s_right[v])
		{
			return ((unsigned char)s_left[v]
					- (unsigned char)s_right[v]);
		}
		v++;
	}
	return (0);
}

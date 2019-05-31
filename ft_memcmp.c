/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:12:12 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/31 08:58:25 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *left, const void *right, size_t how_long)
{
	char	*store_left;
	char	*store_right;
	size_t	v;

	v = 0;
	store_left = (char *)left;
	store_right = (char *)right;
	while (v < how_long && store_right != '\0')
	{
		if (store_left[v] != store_right[v])
		{
			return ((unsigned int)store_left[v]
					- (unsigned int)store_right[v]);
		}
		v++;
	}
	return (0);
}

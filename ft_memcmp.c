/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:12:12 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/27 12:12:29 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *left, const void *right, size_t how_long)
{
	char	*store_left;
	char	*store_right;
	size_t	vegita;

	vegita = 0;
	store_left = (char *)left;
	store_right = (char *)right;
	while (vegita < how_long && store_right != '\0')
	{
		if (store_left[vegita] != store_right[vegita])
		{
			return ((unsigned int)store_left[vegita] - (unsigned int)store_right[vegita]);
		}
		vegita++;
	}
	return (0);
}

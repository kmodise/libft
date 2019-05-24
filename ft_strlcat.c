/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 08:54:19 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/23 09:47:40 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	stop;
	size_t	size_of_dest;
	size_t	sum;

	size_of_dest = ft_strlen(dst);
	stop = 0;
	sum = 0;
	while (stop < dstsize)
	{
		dst[size_of_dest] = src[stop];
		size_of_dest++;
		stop++;
	}
	dst[size_of_dest] = '\0';
	sum = stop + size_of_dest;
	return (sum);
}

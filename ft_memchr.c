/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 10:02:56 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 13:36:54 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*store_s;
	size_t	goku;
	char	store_c;

	store_c = (char)c;
	goku = 0;
	store_s = (char *)s;
	while (goku < n && s != '\0')
	{
		if (store_s[goku] == store_c)
		{
			return ((char *)s + goku);
		}
		goku++;
	}
	return (NULL);
}

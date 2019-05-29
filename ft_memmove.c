/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:07:10 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 13:25:42 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*hold_des;
	char	*hold_src;
	size_t	i;

	i = 0;
	hold_src = (char *)src;
	hold_des = (char *)dst;
	if (dst < src)
	{
		i = len;
		while (hold_src[len])
		{
			hold_des[len] = hold_src[len];
			len--;
		}
	}
	if (dst > src)
	{
		while (i < len)
		{
			hold_des[i] = hold_src[i];
			i++;
		}
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:01:53 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/26 15:35:00 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *paste, const void *copy, int c, size_t n)
{
	char	*ptrpaste;
	char	*ptrcopy;
	size_t	u;

	u = 0;
	ptrpaste = (char *)paste;
	ptrcopy = (char *)copy;
	while (n > 0 && ptrcopy[u] != (char)c)
	{
		if (ptrcopy[u] == '\0')
		{
			break;
		}
		ptrpaste[u] = ptrcopy[u];
		u++;
		n--;
	}
	ptrpaste[u] = '\0';
	return (paste);
}

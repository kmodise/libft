/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 15:01:53 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/31 13:14:18 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**&
*/

#include "libft.h"

void	*ft_memccpy(void *paste, const void *copy, int c, size_t n)
{
	unsigned char	*ptrpaste;
	unsigned char	*ptrcopy;
	size_t	u;
	unsigned char C;

	u = 0;
	ptrpaste = (unsigned char *)paste;
	ptrcopy = (unsigned char *)copy;
	C = (unsigned char)c;
	while (u < n)
	{
		ptrpaste[u] = ptrcopy[u];
		if (ptrcopy[u] == C)
		{
			return (&ptrpaste[u + 1]);
		}
		u++;
	}
	return (NULL);
}

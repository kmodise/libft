/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:41:33 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/27 09:54:39 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *paste, const void *copy, size_t n)
{
	size_t count;
	char *ptrcopy;
	char *ptrpaste;

	ptrcopy = (char *)copy;
	ptrpaste = (char *)paste;
	count = 0;
	while (n > 0)
	{
		ptrpaste[count] = ptrcopy[count];
		count++;
		n--;
	}
	return (paste);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:41:33 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/13 10:18:33 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** try unsigned ptrcopy and paste
*/

#include "libft.h"

void	*ft_memcpy(void *paste, const void *copy, size_t n)
{
	size_t	count;
	char	*ptrcopy;
	char	*ptrpaste;

	ptrcopy = (char *)copy;
	ptrpaste = (char *)paste;
	count = 0;
	if (ptrpaste == NULL && ptrcopy == NULL)
		return (ptrpaste);
	while (count < n)
	{
		ptrpaste[count] = ptrcopy[count];
		count++;
	}
	return (paste);
}

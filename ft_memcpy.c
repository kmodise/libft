/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 12:41:33 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/26 15:44:07 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *paste, const void *copy, size_t n)
{
	size_t s;
	char *pointercopy;
	char *pointerpaste;

	pointercopy = (char *)copy;
	pointerpaste = (char *)paste;
	s = 0;
	while (n > 0)
	{
		pointerpaste[s] = pointercopy[s];
		s++;
		n--;
	}
	return (paste);
}

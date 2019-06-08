/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:11:03 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/08 12:42:21 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int		how_many_dig(int n)
{
	int		k;

	k = 0;
	while (n != 0)
	{
		n = n / 10;
		k++
	}
	return (k);
}

char	*ft_itoa(int n)
{
	int		no_d;
	int		i;
	char	*s;

	i = 0;
	s = (char *)malloc((n + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	no_d = how_many_dig(n);
	while (no_d != i)
	{
		s[no_d] = n % 10 + 48;
		n = n / 10;
		no_d = no_d - 1;
	}
	return (s);
}

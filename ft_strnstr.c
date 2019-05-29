/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 11:08:26 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 13:29:50 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *mouse, const char *cat, size_t how_many)
{
	size_t	search;
	size_t	i;

	i = 0;
	while (mouse[i] != '\0' && i < how_many)
	{
		search = 0;

		/*
		 * i + search so mouse can be ++ by adding search which allways starts at 0 ulike i
		 */
		while (cat[search] == mouse[i + search] &&
				cat[search] != '\0' && search < how_many)
		{
			search++;
		}
		if (cat[search] == '\0')
		{
			return ((char *)mouse + i);
		}
		i++;
	}
	return (NULL);
}

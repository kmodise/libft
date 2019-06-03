/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:07:10 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/03 17:53:54 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*hold;
	size_t	i;

	i = 0;
	hold = (char *)malloc((len + 1) * sizeof(char));
	if (hold == NULL)
	{
		return (NULL);
	}
	ft_memcpy(hold, src, len);
	ft_memcpy(dst, hold, len);
	free(hold);
	return (dst);
}

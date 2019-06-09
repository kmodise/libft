/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 09:03:55 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/09 10:27:28 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;

	i = n + 48;
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		if (n != -1 || n != -2 || n != -3 || n != -4 || n != -5 ||
				n != -6 || n != -7 || n != -8 || n != -9)
		{
			ft_putnbr_fd((0 - (unsigned int)n) / 10, fd);
		}
		i = (n % 10) * -1 + 48;
		write(fd, &i, 1);
	}
	else
	{
		write(fd, &i, 1);
	}
}

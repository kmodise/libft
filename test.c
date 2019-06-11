/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/11 10:13:35 by kmodise          ###   ########.fr       */
/*   Updated: 2019/06/10 11:40:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	**s;
	char	t[100];

	ft_strcpy(t, "*hello**workl*");
	s = ft_strsplit(t, '*');
	printf("ft_ --- %s\n", *(s + 0));
	return (0);
}


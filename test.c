/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/27 10:42:31 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	t(void *s, size_t n)
{
	ft_memset(s, '0', n);
}

int		main(void)
{
//	char s[] = "kakarot";
	char s2[] = "hello";
	//har *p;
	//char *t;
	
	//ft_bzero(s, 2);
	//printf("%s\n", ft_bzero(s, 5));
	char *t;
	t = ft_memchr(s2, '3', 4);
	printf("%s\n", t);
}

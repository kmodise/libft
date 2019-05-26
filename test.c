/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/26 15:46:24 by kmodise          ###   ########.fr       */
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
	memmove(s2, "thislife", 10);
	printf("%s\n", s2);
}

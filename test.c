/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/28 10:51:49 by kmodise          ###   ########.fr       */
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
	char s[] = "theshining";
	char s2[] = "the";
	int		p;
	int		t;
	
	p = strncmp(s, s2, 7);
	printf("%d\n", p);
	t = ft_strncmp(s, s2, 7);
	printf("%d\n", t);
}

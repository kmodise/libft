/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/24 12:03:40 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char s[] = "kakarot";
	char s2 = 't';
	//p = ft_strchr(str1, 'e');
	char *p;
	char *t;
	
	p = ft_strrchr(s, s2);
	printf("%s\n", p);
	t = strrchr(s, s2);
	printf("%s\n", t);
}

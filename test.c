/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/24 16:04:06 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char s[] = "kakarot";
	char s2[] = "aka";
	//p = ft_strchr(str1, 'e');
	char *p;
	char *t;
	
	p = ft_strstr(s, s2);
	printf("%s\n", p);
	t = strstr(s, s2);
	printf("%s\n", t);
}
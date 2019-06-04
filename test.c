/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/04 17:30:02 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char s[] = "the";
	//char s2[] = "	theshininglight";
	char s3[] = " the shining ";
	//char		p;
	//char		t;

//	char t[] = "ooo00000000";

	//p = putchar_fd('t', 2);
	//printf("%d\n", i);
	//ft_putendl_fd(s3, 1);
	//ft_strncpy(t, s2, 0);
	printf("%s\n", ft_strstr(s3, s));
	//printf("%s\n", ft_strtrim(s2)); 
}


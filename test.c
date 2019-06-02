/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/02 13:32:29 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char s[] = "the shining";
	//char s2[] = "rrrrrrttttttt";
	char s3[] = "the shining";
	//char		p;
	//char		t;

	char *t;

	//p = putchar_fd('t', 2);
	//printf("%c\n", p);
	t = ft_strjoin(s, s3);
	printf("%s", t);
	//printf("%c\n", t); 
}


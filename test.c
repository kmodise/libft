/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/30 15:25:10 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char s[] = "the shining";
	char s2[] = "rrrrrrttttttt";
	//char s3[] = "the shining";
	//char	*p;
	int		t;

	//p = ft_memmove(s2, s, 5);
	//printf("%s\n", p);
	t = ft_strcmp(s2, s);
	printf("%d\n", t); 
}


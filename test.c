/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 13:25:31 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char s[] = "the shining";
	char s2[] = "rrrrrrttttttt";
	char s3[] = "the shining";
	char	*p;
	char	*t;

	p = ft_memmove(s2, s, 5);
	printf("%s\n", p);
	t = memmove(s2, s3, 5);
	printf("%s\n", t); 
}


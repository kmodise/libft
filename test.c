/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/03 16:46:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
//	char s[] = "the";
	char s2[] = "wwddddd";
//	char s3[] = "the shining";
	//char		p;
	//char		t;

	char t[] = "ooo00000000";

	//p = putchar_fd('t', 2);
	//printf("%c\n", p);
	//ft_strncpy(t, s2, 0);
	//printf("%s\n", t);
	printf("%s\n", strncpy(t, s2, 7)); 
}


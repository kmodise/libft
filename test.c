/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/13 15:29:36 by kmodise          ###   ########.fr       */
/*   Updated: 2019/06/10 11:40:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	*s;
	char	t[] = "one";
	//char	t1[] = "one";
	char	c = '\0';

	//ft_strcpy(t, "*hello**workl*");
	s = ft_strchr(t, c);
	printf("%s", s);
//	s = strchr(t1, c);
//	printf("%s", s);
	return (0);
}


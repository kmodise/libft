/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/16 15:07:21 by kmodise          ###   ########.fr       */
/*   Updated: 2019/06/10 11:40:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	char	**s;
	//char	t[] = "one";
	char	t1[] = "can*you**split**for**me?";
	//char	c = '\0';

	//ft_strcpy(t, "*hello**workl*");
	//s = ft_strchr(t, c,);
	//printf("%s", s);
	s = ft_strsplit(t1, '*');
	ft_putstr(s[0]);
	ft_putchar('\n');
	ft_putstr(s[1]);
	ft_putchar('\n');
	ft_putstr(s[2]);
	ft_putchar('\n');
	ft_putstr(s[3]);
	ft_putchar('\n');
	ft_putstr(s[4]);
	ft_putchar('\n');
	return (0);
}

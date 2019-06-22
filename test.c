/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:29 by kmodise           #+#    #+#             */
/*   Updated: 2019/06/22 12:22:17 by kmodise          ###   ########.fr       */
/*   Updated: 2019/06/10 11:40:11 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
char	woo(unsigned int i , char s)
{
	if (s >= 'a' && s <= 'z')
		return (s + i);
	return (s);
}

void	roo(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
int		main(void)
{
	/*char	*l = "aaaaa";
	char	*v = ft_strmapi(l, &woo);
	ft_putstr(v);*/
	char	*ss = "because i am batman";
	ft_striter(ss, &roo);
}


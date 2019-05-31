/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:37:16 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/31 08:59:53 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strmp compares null and strnmp doesnt
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned	int	d;

	d = 0;
	while (s1[d] && s1[d] == s2[d])
	{
		d++;
	}
	return ((unsigned int)s1[d] - (unsigned int)s2[d]);
}

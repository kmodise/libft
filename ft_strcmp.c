/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:37:16 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/28 10:38:24 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_srtcmp(const char *s1, const char *s2)
{
	unsigned	int	dragon;
	
	dragon = 0;
	while (s1[dragon] && s1[dragon] == s2[dragon])
	{
		/*
		** strmp compares null and strnmp doesnt
		*/
		dragon++;
	}
	return ((unsigned int)s1[dragon] - (unsigned int)s2[dragon]);
}

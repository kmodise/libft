/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 14:20:35 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/31 14:51:33 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] - s2[i] == 0)
	{
		return (1);
	}
	else
		return (0);
}

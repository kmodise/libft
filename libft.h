/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:11:25 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/21 12:05:07 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

void	*ft_memset(void *str, int a, size_t len);
void	ft_putstr(char *s);
void	ft_putchar(char a);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
#endif

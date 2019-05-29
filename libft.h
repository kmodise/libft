/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmodise <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:11:25 by kmodise           #+#    #+#             */
/*   Updated: 2019/05/29 10:45:10 by kmodise          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	*ft_memset(void *str, int a, size_t len);
void	ft_putstr(char *s);
void	ft_putchar(char a);
int		ft_tolower(int ch);
int		ft_toupper(int ch);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *mouse, const char *cat);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *paste, const void *copy, size_t n);
void	*ft_memccpy(void *paste, const void *copy, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *left, const void *right, size_t how_long);
char	*ft_strnstr(const char *mouse, const char *cat, size_t how_many);
int		ft_strncmp(const char *levi, const char *kenny, size_t how_much);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t len);
#endif

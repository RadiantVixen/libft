/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:25:16 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:34:11 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <strings.h>

void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t l);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t l);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s11, const void *s22, size_t n);
int		ft_atoi(const char *str);
void	ft_bzero(void *o, int len);
int		ft_isalum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, int len);
char	*ft_strrchr(char *s, int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*calloc(size_t count, size_t size);
int		ft_strlen(char *c);

#endif
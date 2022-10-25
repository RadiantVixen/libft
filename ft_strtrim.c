/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:02:18 by aatki             #+#    #+#             */
/*   Updated: 2022/10/25 21:49:17 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*check_front_back(char *s, const char *set)
{
	int	j;

	if (s && set)
	{
		while (*s)
		{
			if (!check(set, *s))
				break ;
			s++;
		}
		j = ft_strlen(s) - 1;
		if (s[0] == '\0')
			return (ft_calloc(1, 1));
		while (j >= 0)
		{
			if (!check(set, *(s + j)))
				return (ft_substr((const char *)s, 0, j + 1));
			j--;
		}
	}
	return (s);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*s1;

	if (!s)
		return (ft_calloc(1, 1));
	if (!set)
		return ((char *)s);
	s1 = check_front_back((char *)s, set);
	return (s1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:02:18 by aatki             #+#    #+#             */
/*   Updated: 2022/10/17 20:07:42 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	harf(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}
char *ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	i = 0;
	j = 0;
	trim = malloc (ft_strlen(s1));
	if (!trim)
		return (NULL);
	while (s1[i])
	{
		if ((harf(set, s1[i])))
			i++;
		else
		{
			trim[j] = s1[i];
			i++;
			j++;
		}
	}
	trim[j] = '\0';
	return (trim);
}


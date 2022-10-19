/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:38:13 by aatki             #+#    #+#             */
/*   Updated: 2022/10/18 16:11:51 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	if (!s1 && !s2)
		return (ft_calloc(1, 1));
	i = -1;
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (s1[++i])
		join[i] = s1[i];
		i = -1;
	while (s2[++i])
		join[ft_strlen(s1) + i] = s2[i];
	join[ft_strlen(s1) + i] = '\0';
	return (join);
}

// int main()
// {
// 	printf("%s",ft_strjoin("aicha","atki"));
// }
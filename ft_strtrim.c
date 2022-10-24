/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:02:18 by aatki             #+#    #+#             */
/*   Updated: 2022/10/23 17:26:46 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char *set, char c)
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

char	*ft_strtrim(const char *s, const char *set)
{
	int	i;
	int	j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] && check((char *)set, s[i]))
		i++;
	while (j >= 0 && check((char *)set, s[j]))
		j--;
	if (j == -1)
		return (ft_strdup("\0"));
	return (ft_substr(s, i, (j - i + 1)));
}

// int main ()
// {
// 	//char * s = ft_strtrim("   xxxtripouille", " x");
// 	char * s = ft_strtrim("   xxxtripouille   xxx", " x");
// 	printf("%s",s);
// 	//printf("\n%zu",ft_strlen(s));
// }
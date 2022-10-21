/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:02:18 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 18:30:27 by aatki            ###   ########.fr       */
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

int	reservation(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	cmpt;

	i = 0;
	cmpt = 0;
	j = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				cmpt++;
			j++;
		}
		j = 0;
		i++;
	}
	return (cmpt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	i = 0;
	j = 0;
	trim = malloc (ft_strlen(s1) - reservation(s1, set) + 1);
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

// int main ()
// {
// 	//char * s = ft_strtrim("   xxxtripouille", " x");
// 	char * s = ft_strtrim("   xxxtripxxxxouille   xxx", " x");
// 	printf("%s",s);
// 	printf("\n%zu",ft_strlen(s));
// }
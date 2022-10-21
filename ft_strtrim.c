/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:34:53 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 15:03:28 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*clear1(char  *s1, char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	j = 0;
	if (!s1)
		return (NULL);
	while (i > 0)
	{
		while (set[j])
		{
			while (s1[i] == set[j])
			{
				i++;
				j++;
			}
			s1[i] ='\0';
			return (s1);
		}
		j = 0;
	}
}
char	*clear(char *s1, char *set)
{
	int	i;

	i = 0;
	s1 = clear1(*s1, set);
	if (!s1)
		return (NULL);
	while (s1)
	{
		while(set[i])
		{
			while (set [i] == *s1)
			{
				i++;
				s1++;
			}
			return (s1);
		}
		i = 0;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;

	trim = malloc (strlen(s1));
	if (!s1)
		return (NULL);
	trim = clear((const char)s1, (const char)set);
	return (trim);
}

int main ()
{
        //char * s = ft_strtrim("   xxxtripouille", " x");
        char * s = ft_strtrim("   xxxtripxxxxouille   xxx", " x");
        printf("%s",s);
        printf("\n%zu",ft_strlen(s));
}
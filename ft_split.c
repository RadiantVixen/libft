/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:34:09 by aatki             #+#    #+#             */
/*   Updated: 2022/10/18 17:34:32 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	compt1(char const *s, char c)
{
	int i;
	int cmpt;
	
	i = 0;
	cmpt = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if((s[0] != c && i == 0) || (s[i] != c && s[i - 1] == c))
			cmpt++;
		i++;
	}
	return (cmpt);
}

int	word(char const *s, char c)
{
	int	k;
	
	k = 0;
	if (!s)
		return (0);
	while (s[k] && s[k] != c)
	{
		k++;
	}
	return (k);
}

char **ft_free(char **p, int len)
{
	int i = 0;
	while (i < len)
		free(p[i]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int 	i;
	int 	j;
	char	**p;
	int		len;
	int		wordlen;

	i = 0;
	j = 0;
	if (!s)
		s = ft_strdup("");
	len = compt1(s, c);
	p = (char**) malloc (sizeof(char *) * len + 1);
	if  (!p)
		return (NULL);
	while (i < len)
	{
		while (*s == c)
			s++;
		wordlen = word(s, c);
		p[i] = malloc(sizeof(wordlen) + 1);
		if (!p[i])
			ft_free(p, len);
		p[i] = ft_memcpy(p[i], s, wordlen);
		s += wordlen;
		i++;
	}
	p[i] = NULL;
	return (p);
}

// int main()
// {
// 	int i = 0;
// 	char const *s;

// 	s = "////aaa////////aaaa/aaaa";
// 	int len = compt1(s, '/');
// 	char **p = ft_split(s, '/');
// 	while (i < len)
// 	{
// 		printf("%s\n", p[i]);
// 		i++;
// 	}
// 	// printf("%d\n", word("aaaa/aaaa/aaa", '/'));
// } 
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:30:51 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:50:45 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*needle == 0 || *haystack == 0)
		return (NULL);
	while (haystack[i++] && len--)
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] && needle[j] && len--
				&& haystack[i + j] == needle[j])
						j++;
			if (j == ft_strlen((char *)needle))
				return ((char *)&haystack[i]);
			else
				j = 0;
		}
	}
	return (0);
}

int	main(void)
{
	printf("%s", ft_strnstr("", "hh", 10));
	printf("\n%s", strnstr("", "hh", 10));
}

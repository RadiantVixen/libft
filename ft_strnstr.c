/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:30:51 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:44:45 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)(haystack));
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	 char haystack[30] = "aaabcabcd";
// 	// char needle[10] = "aabc";
// 	//char * empty = (char*)"";
// 	printf("%s", ft_strnstr(haystack, "abcd", 9));
// 	printf("\n%s", strnstr(haystack, "abcd", 9));
// }

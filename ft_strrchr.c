/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:23:49 by aatki             #+#    #+#             */
/*   Updated: 2022/10/23 17:21:33 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	h;
	int		i;

	h = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)h)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

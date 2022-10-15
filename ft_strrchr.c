/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:23:49 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:50:14 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	h;
	int		i;

	h = (char)c;
	i = ft_strlen(s);
	while (i--)
	{
		if (s[i] == h)
			return (&s[i]);
	}
	return (NULL);
}

// int main()
// {
// 	char y[]="";
// 	printf("%s\n",ft_strrchr(y, 100));
// 	return 0;
// }

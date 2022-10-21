/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:23:49 by aatki             #+#    #+#             */
/*   Updated: 2022/10/20 19:34:08 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	h;
	int		i;

	h = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)h)
			return (s + i);
		i--;
	}
	return (NULL);
}

// int main()
// {
// 	char y[]="gfgghghghh";
// 	printf("%s\n",ft_strrchr(y, 'f'));
// 	return 0;
// }

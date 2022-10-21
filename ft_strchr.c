/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:19:33 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:51:17 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char )c)
			return (s);
		s++;
	}
	if (*s == (unsigned char )c)
		return (s);
	return (NULL);
}

// int main()
// {
// 	char y[]="";
// 	printf("dyalk ---- %s\n dyalhum ----%s",
//ft_strchr(y, 'k'),strchr("aicha",'k'));
// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 02:19:33 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:54:43 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}

// int main()
// {
// 	char y[]="";
// 	printf("dyalk ---- %s\n dyalhum ----%s",
//ft_strchr(y, 'k'),strchr("aicha",'k'));
// 	return 0;
// }

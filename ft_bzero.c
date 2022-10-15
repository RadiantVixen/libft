/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 00:41:36 by aatki             #+#    #+#             */
/*   Updated: 2022/10/14 22:50:00 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *o, int len)
{
	unsigned char	*s;

	s = (unsigned char *)o;
	while (len > 0)
	{
		*s = 0;
		len--;
		s++;
	}
}

// int main()
// {
// 	char	buffer[] = "aaaaannnnnnnn";
// 	//ft_bzero(buffer, 5);
// 	bzero(buffer, 5);
// 	printf("%c\n", buffer[6]);
// 	printf("%c\n", buffer[6]);
// 	return (0);
// }

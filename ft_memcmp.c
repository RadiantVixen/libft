/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:46:57 by aatki             #+#    #+#             */
/*   Updated: 2022/10/20 19:03:43 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s11;
	unsigned char	*s22;

	if (!s1 || !s2)
		return (0);
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (s11 && s22 && n)
	{
		if (*s11 != *s22)
			return (*s11 - *s22);
		s11 ++;
		s22 ++;
		n --;
	}
	return (0);
}

// int main()
// {
// 	int src[] = {127, 2, 3};
//     int dst[] = {255, 2, 3};
//     printf("%d",ft_memcmp(dst,src,2));
//     printf("\n%d",memcmp(dst,src,2));
// }

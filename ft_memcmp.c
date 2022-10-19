/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:46:57 by aatki             #+#    #+#             */
/*   Updated: 2022/10/17 04:21:17 by aatki            ###   ########.fr       */
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
//       char src[] = "aicha";
//       char dst[15] = "abcd";
//       printf("%d",ft_memcmp(dst,src,0));
//       printf("\n%d",memcmp(dst,src,0));
// }

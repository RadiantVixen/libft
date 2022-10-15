/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:46:57 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:53:36 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s11, const void *s22, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)s11;
	s2 = (unsigned char *)s22;
	while (s1 && s2 && n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 ++;
		s2 ++;
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

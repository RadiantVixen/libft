/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:53:09 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:55:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*c;
	size_t			i;

	i = 0;
	s = (unsigned char *)dst;
	c = (unsigned char *)src;
	if (*s == 0 || *c == 0)
		return (0);
	while (c[i] && i < n)
	{
		s[i] = c[i];
		i++;
	}
	return ((void *)s);
}

// int main()
// {
//       const char src[] = "lalala";
//       char dst[15] = "lxxxx";
//       printf("%s\n",ft_memcpy(dst, src ,8));
//       char dest[15] = "lxxxx";
//       printf("hadi dyalk\n%s",memcpy(dest, src,8));
// }

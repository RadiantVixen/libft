/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:20:55 by aatki             #+#    #+#             */
/*   Updated: 2022/10/14 23:31:25 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*c;

	s = (unsigned char *)dst;
	c = (unsigned char *)src;
	if (*s == 0 || *c == 0)
		return (0);
	if (src < dst)
	{
		while (len--)
		{
			s[len] = c[len];
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}

// #include <stdio.h>

// int main()
// {
// 	 char src[] = "hhhhhh";
// 	 char src1[] = "hhhhhh";
// 	  printf("------ dyalhum%s\n",memmove(src+6, src, 0));
// 	  printf("------dyalk\n%s",ft_memmove(src1 +6, src1 ,0));
// }
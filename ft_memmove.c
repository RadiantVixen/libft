/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:20:55 by aatki             #+#    #+#             */
/*   Updated: 2022/10/18 10:56:15 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*c;

	s = (unsigned char *)dst;
	c = (unsigned char *)src;
	if (!dst || !src)
		return (NULL);
	if (src < dst)
	{
		while (len--)
		{
			*(s + len) = *(c + len);
		}
		return (dst);
	}
	return (ft_memcpy(dst, src, len));
}

// int	main(void)
// {
// 	char src[20] = "hhhhhhhhhh";
// 	char src1[20] = "hhhhhhhhhh";

// 	  printf("------ dyalhum %s\n",memmove(src+6, src, 10));
// 	  printf("------dyalk    %s",ft_memmove(src1 +6, src1 ,10));
// }
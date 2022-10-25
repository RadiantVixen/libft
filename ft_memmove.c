/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:20:55 by aatki             #+#    #+#             */
/*   Updated: 2022/10/24 14:16:57 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*c;

	s = (unsigned char *)dst;
	c = (unsigned char *)src;
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

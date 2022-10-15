/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:00:52 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:10:45 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t l)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	if (!dst && !src)
		return (0);
	while (src[len])
		len++;
	while (src[i] && i < l)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i - 1] = '\0';
	return (len);
}
// int main()
// {
//       const char src[] = "    ";
//       char dst[15] = "";
//       printf("%lu  %s",ft_strlcpy(dst, src ,2),dst);
// 	  char dst1[15] = "";
//       printf("\n%lu  %s",strlcpy(dst1, src,2),dst1);
// }

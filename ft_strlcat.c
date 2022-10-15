/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:20:02 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:52:12 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t l)
{
	size_t	len;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	len = 0;
	while (src[len])
		len++;
	while (dst[i])
		i++;
	if (l == 0 || l <= i)
		return (l + len);
	while (src[j] && j < l)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + len);
}

// int main()
// {
//       char src[] = "lkj";
//       char dst[20] = "salam";
//       char src1[] = "lkj";
//       char dst1[20] = "salam";
//       printf("%zu\n",ft_strlcat(dst,src,3));
//       printf("%zu\n",strlcat(dst1,src1,3));
// }
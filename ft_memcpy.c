/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:53:09 by aatki             #+#    #+#             */
/*   Updated: 2022/10/18 12:45:17 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((unsigned char *)dst);
}

// int main()
// {
//     //   const char src[] = "lalala";
//     //   char dst[15] = "lxxxx";
//     //   printf("%s\n",ft_memcpy(NULL, NULL ,8));
//     //   char dest[15] = "lxxxx";
//     //   printf("\n%s",memcpy(NULL, NULL,8));
// 	char src[] = {0, 0};
// 	char dest[100];
// 	ft_memset(dest, 'A', 100);
//     printf("%s\n", ft_memcpy(dest, src, 2));
// 	char src1[] = {0, 0};
// 	char dest1[100];
// 	ft_memset(dest1, 'A', 100);
// 	printf("%s\n", memcpy(dest1, src1, 2));
// }

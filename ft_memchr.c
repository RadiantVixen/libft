/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:10:33 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:54:03 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*g;

	g = (unsigned char *) s;
	while (g && n)
	{
		if (*g == c)
			return ((void *)g);
		g++;
		n--;
	}
	return (NULL);
}

// int main()
// {
//       //char src[] = "aicha";
//       char dst[15] = "abcd";
//       printf("%s",ft_memchr(dst,'c',3));
//       printf("\n%s",memchr(dst,'c',3));
// }

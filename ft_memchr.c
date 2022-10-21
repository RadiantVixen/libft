/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:13:19 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:35:25 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*g;
	size_t			i;

	if (!s)
		return (NULL);
	g = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (g[i] == (unsigned char)c)
			return (g + i);
		i++;
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

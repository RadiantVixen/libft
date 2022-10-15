/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:56:19 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:56:02 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t				i;
	unsigned char		*x;

	i = 0;
	x = (unsigned char *) b;
	if (len && !x)
		return (0);
	while (i < len)
	{
		x[i] = c;
		i++;
	}
	return ((void *)x);
}

// int main()
// {
// 	char str[] =  "abcd";
// 	printf("%s %s\n", memset(str,50,0), str);
// 	char str1[] =  "abcd";
// 	//printf("%s %s\n", ft_memset(str1,50,0), str1);
// 	return 0;
// }
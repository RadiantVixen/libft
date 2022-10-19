/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:35 by aatki             #+#    #+#             */
/*   Updated: 2022/10/18 19:04:00 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

// void	f(unsigned int a, char* b)
// {
// 	a = 0;
// 	b = ft_strchr(b,'i');
// 	printf("%s\n", b);
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	if (s)
		f(i, s);
}

// int main ()
// {
// 	char s[] = "aicha";
// 	ft_striteri(s, f);
// 	printf("%s",s);
// }
	
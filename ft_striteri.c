/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:35 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 12:37:45 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void	f(unsigned int a, char* b)
// {
// 	a = 0;
// 	b = ft_strchr(b,'i');
// 	printf("%s\n", b);
// }

// int iTest = 1;

// void
// iter(unsigned int i, char * s) {
// 	*s += i;
// }

// int main()
// {
// 	char s[] = "0000000000";
// 	ft_striteri(s, iter);
// 	printf("%s",s);
// }
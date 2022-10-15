/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:25:39 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:51:49 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	a;

	i = 0;
	s = 1;
	a = 0;
	while (str[i] == '\t' || str[i] == '\n' \
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r' \
			|| str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	return (a * s);
}

// #include <limits.h>
// int main()
// {
// 	printf("%d\n%d",ft_atoi("555a2"),atoi("555a2"));
// }
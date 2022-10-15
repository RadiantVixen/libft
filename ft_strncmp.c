/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:40:31 by aatki             #+#    #+#             */
/*   Updated: 2022/10/15 00:16:06 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && n && s1[i] == s2[i])
	{
		i++;
		n--;
	}
	if (s1[i] < s2[i])
		return (-1);
	else if (s1[i] > s2[i])
		return (1);
	else
		return (0);
}

// int main()
// {
// 	printf("%d %d",ft_strncmp("","",0),strncmp("","",0));
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:10:10 by aatki             #+#    #+#             */
/*   Updated: 2022/10/17 18:34:09 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	u;

	u = (unsigned char) c;
	if (u >= 'a' && u <= 'z')
		u -= 32;
	return ((int)u);
}

// int main(){
// 	int c='g';
// 	printf("%c\n",ft_toupper(c));
// 	printf("%c",toupper(c));
// 	return 0;
// }

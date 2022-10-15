/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:18:19 by aatki             #+#    #+#             */
/*   Updated: 2022/10/13 23:23:26 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	u;

	u = (unsigned char) c;
	if (u >= 'A' && u <= 'Z')
		u += 32;
	return ((int)u);
}

// #include<ctype.h>
// 
// int main(){
// 	int c='G';
// 	printf("%c\n",ft_tolower(c));
// 	printf("%c",tolower(c));
// 	return 0;	
// }
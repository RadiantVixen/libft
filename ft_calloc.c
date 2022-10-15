/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:07:46 by aatki             #+#    #+#             */
/*   Updated: 2022/10/14 22:57:24 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ch;
	void			*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ch = (unsigned char *)ptr;
	while (--size)
	{
		*ch = 0;
		ch++;
	}
	return (ptr);
}
// int main ()
// {
//     int *p;
//     char *t;
//     p=calloc(5,sizeof(int));
//     t= (char *)ft_calloc(5,sizeof(char));
//     t= (char *)calloc(5,sizeof(char));

//     printf("%p \n",p);
//     for (size_t i = 0; i < 5; i++){
//       //  printf("- %c - ",t[i]);
//         printf("- %d - ",t[i]);
//     }
//     //printf("%d",t[4]);
//     //int *k = (int *) malloc(sizeof(int) * 20);
//     return (0);
// }

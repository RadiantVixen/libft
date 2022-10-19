/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:07:46 by aatki             #+#    #+#             */
/*   Updated: 2022/10/17 03:50:11 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
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

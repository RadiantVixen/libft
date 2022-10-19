/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:48:56 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 09:17:38 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *g;

	while(lst)
	{	
		g = lst;
		lst = lst->next;
	}
	return (g);
}

// int main()
// {
// 	t_list *lst=ft_lstnew("test");
// 	t_list *l=ft_lstnew("aicha");
// 	t_list *t= ft_lstnew("QR");
// 	ft_lstadd_front(&lst, l);
// 	ft_lstadd_front(&l,t);
	
// 	//ft_lstadd_front(&lst, t);
// 	//printf("%d",ft_lstsize(t));
// 	printf("%s",ft_lstlast(t)->content);
// }
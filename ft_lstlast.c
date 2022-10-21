/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 08:48:56 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 11:50:36 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
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
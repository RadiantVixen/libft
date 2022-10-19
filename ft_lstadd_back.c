/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:03:20 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 09:25:34 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while((*lst)->next)
	{
		(*lst)->next = (*lst)->next->next;
	}
	(*lst)->next = new;
}

// int main()
// {
// 	t_list *lst=ft_lstnew("test");
// 	t_list *l=ft_lstnew("aicha");
// 	t_list *t= ft_lstnew("QR");
// 	t_list *r= ft_lstnew("blabla");
// 	ft_lstadd_front(&lst, l);
// 	ft_lstadd_front(&l,t);
// 	ft_lstadd_back(&t,r);
// 	printf("%s",ft_lstlast(t)->content);
// }
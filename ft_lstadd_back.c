/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:03:20 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 13:25:35 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	//printf("aa");
	// if (!lst && new)
	// 	*lst = ft_lstnew(new->content);
		//printf("aa");
	if (!lst || !new)
		return ;
	while ((*lst)->next)
	{
		(*lst)->next = (*lst)->next->next;
	}
	(*lst)->next = new;
}

int main()
{
	t_list *lst=ft_lstnew("test");
	t_list *l=ft_lstnew("aicha");
	t_list *t= ft_lstnew("QR");
	t_list *r= ft_lstnew("blabla");
	// t_list	*hg = NULL;
	// t_list	*new=ft_lstnew((void*)1);
	ft_lstadd_front(&lst, l);
	ft_lstadd_front(&l,t);
	l = NULL;
	ft_lstadd_back(&l, r);
	printf("%s",ft_lstlast(l)->content);
}
// int main ()
// {
// 	t_list * l =  NULL;
// 	 t_list * l2 = ft_lstnew((void*)1);
// 	 //printf("%d",(int)l2->content);
// 	ft_lstadd_back(&l, l2);
// 	//printf("%d",l->content == (void*)1);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:03:20 by aatki             #+#    #+#             */
/*   Updated: 2022/10/21 18:20:53 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = (*lst);
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

// int main ()
// {
// 	t_list * l =  NULL;
// 	t_list * l2 = NULL;
// 	ft_lstadd_back(&l, ft_lstnew((void*)1));
// 	ft_lstadd_back(&l, ft_lstnew((void*)2));
// 	ft_lstadd_back(&l2, ft_lstnew((void*)3));
// 	ft_lstadd_back(&l2, ft_lstnew((void*)4));
// 	ft_lstadd_back(&l, l2);
// 	printf("%d\n",l->next->content == (void*)2);
// 	printf("%d",(int)l->next->content);
// }
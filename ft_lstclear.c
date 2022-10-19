/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:44:16 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 12:15:05 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *p)
{
	free (p);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	
	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst) ->next;
		ft_lstdelone(tmp,del);
		free (*lst);
	}
}

// int main()
// {
// 	int i = 0;
	
// 	t_list *lst = ft_lstnew(ft_strdup("Hello"));
// 	lst->next = ft_lstnew(ft_strdup("WorldLL"));
// 	lst->next->next = ft_lstnew(ft_strdup("!!!!"));
// 	ft_lstclear(&lst,del);
// 	while (lst)
// 	{
// 		printf("%s\n", lst->content);
// 		lst = lst->next;
// 	}
// }
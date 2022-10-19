/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aatki <aatki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:29:53 by aatki             #+#    #+#             */
/*   Updated: 2022/10/19 11:19:57 by aatki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *p)
// {
// 	free (p);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	lst = lst->next;
	free(lst);
}

// int main()
// {
// 	int i = 0;
	
// 	t_list *lst = ft_lstnew(ft_strdup("Hello"));
// 	lst->next = ft_lstnew(ft_strdup("WorldLkkL"));
// 	ft_lstdelone(lst, del);
// 	while (lst)
// 	{
// 		printf("%s\n", lst->content);
// 		lst= lst->next;
// 	}
// }